
// NOTE to avoid cache flushes during the attestation, the code should be 
//      placed within one cache block (i.e. one single compressed block)

#include "attestation.h"

// RC4 implementation

uint16_t rc4_i = 0, rc4_j = 0;
uint8_t rc4_s[256];
  
// swap bytes within s-box

void rc4_swap(uint8_t i, uint8_t j) {
  uint8_t tmp;

  tmp = rc4_s[i];
  rc4_s[i] = rc4_s[j];
  rc4_s[j] = tmp;
}

// initialize rc4 s-box

void rc4_init(uint8_t* key, uint8_t length) {
  uint16_t i, j;

  for(i = 0; i < 256; i++)
    rc4_s[i] = i;

  j = 0;

  for(i = 0; i < 256; i++) {
    j = (j + rc4_s[i] + key[i % length]) % 256;

    rc4_swap(i, j);
  }
}

// ask rc4 PRNG for next random

uint8_t rc4_next() {
  rc4_i = (rc4_i + 1) % 256;
  rc4_j = (rc4_j + rc4_s[rc4_i]) % 256;

  rc4_swap(rc4_i, rc4_j);

  return rc4_s[(rc4_s[rc4_i] + rc4_s[rc4_j]) % 256];
}

// use RC4 to calculate next address for pseudorandom memory traversal

uint32_t next_addr() {
  uint32_t addr;

  addr = rc4_next();
  addr <<= 8;
  addr += rc4_next();
  addr <<= 1;
  addr += rc4_next() & 0x01;

  return addr;
}

// calculate attestation checksum

void attestation(uint32_t nonce) {
  uint32_t max_addr = MAX_MEMORY, i, current_addr, last_addr;
  uint8_t checksum[CHECKSUM_LENGTH];
  uint8_t nonce_bytes[4];
  uint8_t byte, carry;

  // convert nonce to byte array

  nonce_bytes[0] = (nonce & 0xff000000) >> 24;
  nonce_bytes[1] = (nonce & 0x00ff0000) >> 16;
  nonce_bytes[2] = (nonce & 0x0000ff00) >> 8;
  nonce_bytes[3] = (nonce & 0x000000ff);

  // initialize checksum bytes

  for(i = 0; i < CHECKSUM_LENGTH; i++)
    checksum[i] = 0;

  // initialize rc4 using nonce

  rc4_init(nonce_bytes, 4);

  // initialize addresses

  current_addr = last_addr = next_addr();

  for(i = 0, byte = 0; i < max_addr; i++) {
    // update checksum byte

    checksum[byte] += (pgm_read_byte_far(current_addr) ^ checksum[(byte - 2) % CHECKSUM_LENGTH]) + last_addr;

    // rotate left 1 bit

    carry = checksum[byte] >> 7;
    checksum[byte] <<= 1;
    checksum[byte] += carry;

    // increment checksum index

    byte++;
    byte %= CHECKSUM_LENGTH;

    // save address in last_addr and ask PRNG for next address

    last_addr = current_addr;
    current_addr = next_addr();
  }
}

