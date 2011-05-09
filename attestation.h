
#ifndef ATTESTATION_H
#define ATTESTATION_H

#include <stdint.h>

#define CHECKSUM_LENGTH 4 // max 8 (64-bit)

// due to the coupon collector's problem we have to do 128K * ln(128K) accesses
// NOTE it increases the attacker's overhead, because the paper assumes 128K memory accesses only

#define MAX_MEMORY_ACCESSES 1544474 

uint64_t attestation(uint32_t nonce);

#endif

