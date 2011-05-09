
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../attestation.h"

uint8_t program[131072]; // 128K

bool read_program(char* path) {
  FILE* stream = fopen(path, "rb");
  size_t num;

  if(!stream) {
    puts("can't read program");

    return false;
  }

  num = fread(program, 1, sizeof(program), stream);

  printf("%i elements read\n", num);

  fclose(stream);

  return true;
}

uint8_t pgm_read_byte_far(uint32_t addr) {
  return program[addr];
}

int main(int argc, char* argv[]) {
  uint8_t checksum[CHECKSUM_LENGTH];

  if(argc != 2) {
    puts("missing program path");

    return EXIT_FAILURE;
  }

  if(!read_program(argv[1])) {
    puts("unable to read program");

    return EXIT_FAILURE;
  }

  attestation(0xf3a107c3, checksum);
  
  printf("%i,%i,%i,%i\n", checksum[0], checksum[1], checksum[2], checksum[3]);

  return EXIT_SUCCESS;
}


