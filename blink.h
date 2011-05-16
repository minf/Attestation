
enum {
  AM_ATTESTATION = 6,
  TIMER_PERIOD_MILLI = 250
};

typedef nx_struct AttestationMsg {
  nx_uint16_t nodeid;
  nx_uint16_t counter;
} AttestationMsg;

