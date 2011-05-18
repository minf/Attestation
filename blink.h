
enum {
  LPL_INTERVAL = 2000,
  AM_ATTESTATION_RESPONSE = 0x92,
  AM_ATTESTATION_REQUEST = 0x93,
  TIMER_PERIOD_MILLI = 5000
};

typedef nx_struct AttestationResponseMsg {
  nx_uint32_t nonce;
  nx_uint64_t checksum;
} AttestationResponseMsg;

typedef nx_struct AttestationRequestMsg {
  nx_uint32_t nonce;
} AttestationRequestMsg;

