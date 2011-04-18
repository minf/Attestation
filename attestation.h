
#ifndef ATTESTATION_H
#define ATTESTATION_H

#include <stdint.h>
#include <avr/pgmspace.h>

#define CHECKSUM_LENGTH 4
#define MAX_MEMORY_ACCESSES 1544474 // 128K * ln(128K)

void attestation(uint32_t nonce);

#endif

