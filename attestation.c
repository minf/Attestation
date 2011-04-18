
// NOTE to avoid cache flushes during the attestation, the code should be 
//      placed within one cache block (i.e. one single compressed block)

#include "attestation.h"

// RC4 implementation

uint16_t rc4_i = 0, rc4_j = 0;
uint8_t rc4_s[256];
  
void rc4_swap(uint8_t i, uint8_t j) {
  uint8_t tmp;

  tmp = rc4_s[i];
  rc4_s[i] = rc4_s[j];
  rc4_s[j] = tmp;
}

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

void attestation() {
  uint8_t key[] = { 0x38, 0x79, 0xf3, 0x1d };
  uint32_t max_addr = 0x1ffff, i, current_addr, last_addr;
  uint8_t checksum[CHECKSUM_LENGTH];
  uint8_t byte;

  for(i = 0; i < CHECKSUM_LENGTH; i++)
    checksum[i] = 0;

  rc4_init(key, 4);

  current_addr = last_addr = next_addr();

  for(i = 0, byte = 0; i < max_addr; i++) {
    checksum[byte] += (pgm_read_byte_far(current_addr) ^ checksum[(byte - 2) % CHECKSUM_LENGTH]) + last_addr;

    // TODO rotate

    byte++;
    byte %= CHECKSUM_LENGTH;

    last_addr = current_addr;
    current_addr = next_addr();
  }
}

