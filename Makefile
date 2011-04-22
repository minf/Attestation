COMPONENT=BlinkAppC
include $(MAKERULES)

PFLAGS += attestation.c

build/prover: prover.c attestation.c
	gcc -DPROVER -o build/prover prover.c attestation.c

