
#include <stdio.h>
#include "../attestation.h"

uint8_t program[131072]; // 128K

void read_program(char* path) {
  FILE* stream = fopen(path, "rb");
  size_t num;

  if(!stream) {
    printf("can't read program\n");

    return;
  }

  num = fread(program, 1, sizeof(program), stream);

  printf("%i elements read\n", num);

  fclose(stream);
}

uint8_t pgm_read_byte_far(uint32_t addr) {
  return program[addr];
}

int main(int argc, char* argv[]) {
  uint8_t checksum[CHECKSUM_LENGTH];

  if(argc != 2) {
    printf("missing program path\n");

    return 0;
  }

  read_program(argv[1]);

  attestation(0xf3a107c3, checksum);
  
  printf("%i,%i,%i,%i\n", checksum[0], checksum[1], checksum[2], checksum[3]);
}


