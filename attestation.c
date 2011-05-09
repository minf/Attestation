
// NOTE to avoid cache flushes during the attestation, the code should be 
//      placed within one cache block (i.e. one single compressed block)

#ifdef SENSOR
  #include <avr/pgmspace.h>
#endif

#include "attestation.h"

// RC4 implementation

uint16_t rc4_i = 0, rc4_j = 0;
uint8_t rc4_s[256];
  
// swap bytes within s-box

inline void rc4_swap(uint8_t i, uint8_t j) {
  uint8_t tmp;

  tmp = rc4_s[i];
  rc4_s[i] = rc4_s[j];
  rc4_s[j] = tmp;
}

// initialize rc4 s-box

inline void rc4_init(uint8_t* key, uint8_t length) {
  uint32_t i, j;

  for(i = 0; i < 256; i++)
    rc4_s[i] = i;

  j = 0;

  for(i = 0; i < 256; i++) {
    j += j;
    j += rc4_s[i];
    j += key[i % length];
    j %= 256;

    rc4_swap(i, j);
  }
}

// ask rc4 PRNG for next random

inline uint8_t rc4_next() {
  uint32_t tmp;

  rc4_i += 1;
  rc4_i %= 256;

  rc4_j += rc4_j;
  rc4_j += rc4_s[rc4_i];
  rc4_j %= 256;

  rc4_swap(rc4_i, rc4_j);

  tmp = rc4_s[rc4_i];
  tmp += rc4_s[rc4_j];
  tmp %= 256;

  return rc4_s[tmp];
}

// use RC4 to calculate next address for pseudorandom memory traversal

inline uint32_t next_addr() {
  uint32_t addr;

  addr = rc4_next();
  addr <<= 8;
  addr += rc4_next();
  addr <<= 1;
  addr += rc4_next() & 0x01;

  return addr;
}

// calculate attestation checksum

uint64_t attestation(uint32_t nonce) {
  uint32_t i, current_addr, last_addr;
  uint8_t checksum[CHECKSUM_LENGTH];
  uint8_t nonce_bytes[4];
  uint8_t byte, carry, tmp;
  uint64_t result;

__asm("nop");

  // initialize checksum

  for(i = 0; i < CHECKSUM_LENGTH; i++)
    checksum[i] = 0;

  // convert nonce to byte array

  nonce_bytes[0] = (nonce & 0xff000000) >> 24;
  nonce_bytes[1] = (nonce & 0x00ff0000) >> 16;
  nonce_bytes[2] = (nonce & 0x0000ff00) >> 8;
  nonce_bytes[3] = (nonce & 0x000000ff);

  // initialize rc4 using nonce

  rc4_init(nonce_bytes, 4);

  // discard first 256 rc4 values

  for(i = 0; i < 256; i++)
    rc4_next();

  // initialize addresses

  current_addr = last_addr = next_addr();

  for(i = 0, byte = 0; i < MAX_MEMORY_ACCESSES; i++) {
    // update checksum byte

    tmp = byte - 2;
    tmp %= CHECKSUM_LENGTH;
    tmp = checksum[tmp];
    tmp = pgm_read_byte_far(current_addr) ^ tmp;
    tmp += last_addr;

    checksum[byte] += tmp;

    // rotate left 1 bit

    carry = checksum[byte] >> 7;
    checksum[byte] <<= 1;
    checksum[byte] += carry;

    // increment checksum index

    byte += 1;
    byte %= CHECKSUM_LENGTH;

    // save address in last_addr and ask PRNG for next address

    last_addr = current_addr;
    current_addr = next_addr();
  }

  // create checksum

  for(result = 0, i = 0; i < CHECKSUM_LENGTH; i++) {
    result <<= 8;
    result += checksum[i];
  }

__asm("nop");

  return result;
}

