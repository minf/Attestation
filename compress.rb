#!/usr/bin/ruby

require "stringio"
require "zip/zip"

unless ARGV.size == 3
  puts "usage: compress [program (has to be in elf format)] [block size] [out file]"

  exit
end

srand 0

# encode 24 bit value as 3 bytes

def encode_three_bytes(val)
  [ (val & 0xff0000) >> 16, (val & 0x00ff00) >> 8, (val & 0x0000ff) ]
end

# configuration

program = ARGV[0]
block_size = ARGV[1].to_i
compressed_program = ARGV[2]
destination_size = 131072 # 128K

# read program in binary format

unless File.exists?(program)
  puts "unable to find program"

  exit
end

binary_temp_file = "/tmp/program.bin"

File.unlink binary_temp_file if File.exists?(binary_temp_file)

%x{ avr-objcopy -O binary "#{program}" "#{binary_temp_file}" }

unless File.exists?(binary_temp_file)
  puts "unable to objcopy in binary format"

  exit
end

binary_program = File.open(binary_temp_file, "rb").read

# read disassembly

disassembled_temp_file = "/tmp/program.od"

File.unlink disassembled_temp_file if File.exists?(disassembled_temp_file)

%x{ avr-objdump -b binary -m avr -zhD "#{binary_temp_file}" > "#{disassembled_temp_file}" }

unless File.exists?(disassembled_temp_file)
  puts "unable to objdump in assembly format"

  exit
end

disassembled_program = File.open(disassembled_temp_file, "rb").read

# as instructions are not of equal length we use the assembly to calculate offsets

def has_address?(assembly, addr) # address present within assembly?
  assembly.grep(/^\s*#{"%x" % addr}:/).size > 0
end

offsets = []

current_addr = 0

while current_addr < binary_program.size
  offset_addr = destination_addr = current_addr + block_size

  while !has_address?(disassembled_program, destination_addr)
    destination_addr -= 1
  end

  break if offset_addr >= binary_program.size

  offsets.push destination_addr
    
  current_addr = destination_addr
end

# create blocks using the offsets

blocks = []

stream = StringIO.new binary_program

offsets.each_with_index do |lat_entry, index|
  bytes_to_read = lat_entry
  bytes_to_read -= offsets[index - 1] if index > 0

  block = stream.read bytes_to_read

  blocks.push block
end

last_block = stream.read

blocks.push(last_block) if last_block.size > 0

# compress the blocks

compressed_blocks = blocks.collect{ |block| Zlib::Deflate.deflate(block, 9) }

# build the LAT

compressed_lat = [ 0 ] + compressed_blocks.inject([]){ |res,block| res.push((res.last || 0) + block.size) }
uncompressed_lat = [ 0 ] + blocks.inject([]){ |res,block| res.push((res.last || 0) + block.size) }

# write the compressed program image

output = []

# write compressed blocks

compressed_blocks.each{ |compressed_block| output += Array compressed_block.bytes }

# fill remaining memory with pseudorandom noise

output.size.times do rand end # be sure to generate the pseudorandom values correclty

until output.size == destination_size
  output.push((rand * 1000) % 256)
end

# partially overwrite pseudorandom noise with LAT at fixed position

lat_offset = 130048 # fixed position (address 127K)
current_lat_pos = lat_offset

# write lat size

output[current_lat_pos] = compressed_lat.size
current_lat_pos += 1

compressed_lat.zip(uncompressed_lat).each do |lat_entry|
  compressed_lat_entry = lat_entry[0]
  uncompressed_lat_entry = lat_entry[1]

  # encode LAT entries (offsets of compressed blocks) using 24 bit

  lat_entry_bytes = encode_three_bytes compressed_lat_entry

  output[current_lat_pos]     = lat_entry_bytes[0]
  output[current_lat_pos + 1] = lat_entry_bytes[1]
  output[current_lat_pos + 2] = lat_entry_bytes[2]

  current_lat_pos += 3

  # encode LAT entries (offsets of uncompressed blocks) using 24 bit

  lat_entry_bytes = encode_three_bytes uncompressed_lat_entry

  output[current_lat_pos]     = lat_entry_bytes[0]
  output[current_lat_pos + 1] = lat_entry_bytes[1]
  output[current_lat_pos + 2] = lat_entry_bytes[2]

  current_lat_pos += 3
end

# write program image to disk

open(compressed_program, "wb"){ |stream| stream.write output.pack("C" * output.size) }

# show some statistics

compressed_size = compressed_blocks.collect{ |cb| cb.size }.inject(0){ |sum,cur| sum += cur}

puts compressed_lat.inspect
puts uncompressed_lat.inspect
puts "s = #{block_size} bytes" 
puts "|CI| = #{binary_program.size} bytes"
puts "|C(CI)| = #{compressed_size} bytes (compression ratio: #{compressed_size.to_f / binary_program.size.to_f})"
puts "|LAT| = #{1 + compressed_lat.size * 3 + uncompressed_lat.size * 3} bytes (#{compressed_lat.size} LAT entries)"
puts "|PRW| + |LAT| + |C(CI)| = #{destination_size} bytes (#{destination_size / 1024} kilobytes)" 

