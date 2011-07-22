#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 121 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 264
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;






static __inline int16_t __nesc_ntoh_int16(const void * source)  ;
#line 288
static __inline int16_t __nesc_hton_int16(void * target, int16_t value)  ;





static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 343
static __inline uint64_t __nesc_hton_uint64(void * target, uint64_t value)  ;
#line 385
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 112 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x2b536de5f940, const void *arg_0x2b536de5fc18, size_t arg_0x2b536de5e020);



extern void *memset(void *arg_0x2b536de627f0, int arg_0x2b536de62a58, size_t arg_0x2b536de62d00);
# 71 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2b536de83968, const void *arg_0x2b536de83c40);
# 20 "/opt/tinyos-2.0.2/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 21
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;





struct __nesc_attr_atmostonce {
};
#line 31
struct __nesc_attr_atleastonce {
};
#line 32
struct __nesc_attr_exactlyonce {
};
# 34 "/opt/tinyos-2.0.2/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2);
# 57 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 52
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 210 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.0.2/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/tinyos-2.0.2/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2);
# 34 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4260 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4261 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4262 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4263 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4264 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4265 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4266 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4269 {

  uint8_t flat;
  struct __nesc_unnamed4270 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4277 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4280 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.0.2/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4289 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4290 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4291 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4292 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 8
};
# 55 "/opt/tinyos-2.0.2/tos/platforms/mica2/hardware.h"
enum __nesc_unnamed4295 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7
};

enum __nesc_unnamed4296 {
  PLATFORM_BAUDRATE = 57600L
};
# 2 "blink.h"
enum __nesc_unnamed4297 {
  LPL_INTERVAL = 2000, 
  AM_ATTESTATION_RESPONSE = 0x92, 
  AM_ATTESTATION_REQUEST = 0x93, 
  TIMER_PERIOD_MILLI = 5000
};




#line 9
typedef nx_struct AttestationResponseMsg {
  nx_uint32_t nonce;
  nx_uint64_t checksum;
} __attribute__((packed)) AttestationResponseMsg;



#line 14
typedef nx_struct AttestationRequestMsg {
  nx_uint32_t nonce;
} __attribute__((packed)) AttestationRequestMsg;
# 54 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Const.h"
enum __nesc_unnamed4298 {
  CC1K_MAIN = 0x00, 
  CC1K_FREQ_2A = 0x01, 
  CC1K_FREQ_1A = 0x02, 
  CC1K_FREQ_0A = 0x03, 
  CC1K_FREQ_2B = 0x04, 
  CC1K_FREQ_1B = 0x05, 
  CC1K_FREQ_0B = 0x06, 
  CC1K_FSEP1 = 0x07, 
  CC1K_FSEP0 = 0x08, 
  CC1K_CURRENT = 0x09, 
  CC1K_FRONT_END = 0x0A, 
  CC1K_PA_POW = 0x0B, 
  CC1K_PLL = 0x0C, 
  CC1K_LOCK = 0x0D, 
  CC1K_CAL = 0x0E, 
  CC1K_MODEM2 = 0x0F, 
  CC1K_MODEM1 = 0x10, 
  CC1K_MODEM0 = 0x11, 
  CC1K_MATCH = 0x12, 
  CC1K_FSCTRL = 0x13, 
  CC1K_FSHAPE7 = 0x14, 
  CC1K_FSHAPE6 = 0x15, 
  CC1K_FSHAPE5 = 0x16, 
  CC1K_FSHAPE4 = 0x17, 
  CC1K_FSHAPE3 = 0x18, 
  CC1K_FSHAPE2 = 0x19, 
  CC1K_FSHAPE1 = 0x1A, 
  CC1K_FSDELAY = 0x1B, 
  CC1K_PRESCALER = 0x1C, 
  CC1K_TEST6 = 0x40, 
  CC1K_TEST5 = 0x41, 
  CC1K_TEST4 = 0x42, 
  CC1K_TEST3 = 0x43, 
  CC1K_TEST2 = 0x44, 
  CC1K_TEST1 = 0x45, 
  CC1K_TEST0 = 0x46, 


  CC1K_RXTX = 7, 
  CC1K_F_REG = 6, 
  CC1K_RX_PD = 5, 
  CC1K_TX_PD = 4, 
  CC1K_FS_PD = 3, 
  CC1K_CORE_PD = 2, 
  CC1K_BIAS_PD = 1, 
  CC1K_RESET_N = 0, 


  CC1K_VCO_CURRENT = 4, 
  CC1K_LO_DRIVE = 2, 
  CC1K_PA_DRIVE = 0, 


  CC1K_BUF_CURRENT = 5, 
  CC1K_LNA_CURRENT = 3, 
  CC1K_IF_RSSI = 1, 
  CC1K_XOSC_BYPASS = 0, 


  CC1K_PA_HIGHPOWER = 4, 
  CC1K_PA_LOWPOWER = 0, 


  CC1K_EXT_FILTER = 7, 
  CC1K_REFDIV = 3, 
  CC1K_ALARM_DISABLE = 2, 
  CC1K_ALARM_H = 1, 
  CC1K_ALARM_L = 0, 


  CC1K_LOCK_SELECT = 4, 
  CC1K_PLL_LOCK_ACCURACY = 3, 
  CC1K_PLL_LOCK_LENGTH = 2, 
  CC1K_LOCK_INSTANT = 1, 
  CC1K_LOCK_CONTINUOUS = 0, 


  CC1K_CAL_START = 7, 
  CC1K_CAL_DUAL = 6, 
  CC1K_CAL_WAIT = 5, 
  CC1K_CAL_CURRENT = 4, 
  CC1K_CAL_COMPLETE = 3, 
  CC1K_CAL_ITERATE = 0, 


  CC1K_PEAKDETECT = 7, 
  CC1K_PEAK_LEVEL_OFFSET = 0, 


  CC1K_MLIMIT = 5, 
  CC1K_LOCK_AVG_IN = 4, 
  CC1K_LOCK_AVG_MODE = 3, 
  CC1K_SETTLING = 1, 
  CC1K_MODEM_RESET_N = 0, 


  CC1K_BAUDRATE = 4, 
  CC1K_DATA_FORMAT = 2, 
  CC1K_XOSC_FREQ = 0, 


  CC1K_RX_MATCH = 4, 
  CC1K_TX_MATCH = 0, 


  CC1K_DITHER1 = 3, 
  CC1K_DITHER0 = 2, 
  CC1K_SHAPE = 1, 
  CC1K_FS_RESET_N = 0, 


  CC1K_PRE_SWING = 6, 
  CC1K_PRE_CURRENT = 4, 
  CC1K_IF_INPUT = 3, 
  CC1K_IF_FRONT = 2, 


  CC1K_LOOPFILTER_TP1 = 7, 
  CC1K_LOOPFILTER_TP2 = 6, 
  CC1K_CHP_OVERRIDE = 5, 
  CC1K_CHP_CO = 0, 


  CC1K_CHP_DISABLE = 5, 
  CC1K_VCO_OVERRIDE = 4, 
  CC1K_VCO_AO = 0, 


  CC1K_BREAK_LOOP = 4, 
  CC1K_CAL_DAC_OPEN = 0, 
#line 202
  CC1K_433_002_MHZ = 0x00, 
  CC1K_915_998_MHZ = 0x01, 
  CC1K_434_845_MHZ = 0x02, 
  CC1K_914_077_MHZ = 0x03, 
  CC1K_315_178_MHZ = 0x04, 


  CC1K_SquelchInit = 0x120, 
  CC1K_SquelchTableSize = 9, 
  CC1K_MaxRSSISamples = 5, 
  CC1K_Settling = 1, 
  CC1K_ValidPrecursor = 2, 
  CC1K_SquelchIntervalFast = 2048, 
  CC1K_SquelchIntervalSlow = 2560, 
  CC1K_SquelchCount = 30, 
  CC1K_SquelchBuffer = 12, 

  CC1K_LPL_STATES = 9, 

  CC1K_LPL_PACKET_TIME = 16, 

  CC1K_LPL_CHECK_TIME = 16, 



  CC1K_LPL_MIN_INTERVAL = 5, 

  CC1K_LPL_MAX_INTERVAL = 10000
};
#line 248
static const_uint8_t CC1K_Params[6][20] = { 

{ 
0x31, 

0x58, 0x00, 0x00, 

0x57, 0xf6, 0x85, 

0X03, 0x55, (

4 << CC1K_VCO_CURRENT) | (1 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

12 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

0 << CC1K_PEAKDETECT) | (28 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x7c, 0x00, 0x00, 

0x7b, 0xf9, 0xae, 

0x02, 0x38, (

8 << CC1K_VCO_CURRENT) | (3 << CC1K_LO_DRIVE), ((


1 << CC1K_BUF_CURRENT) | (2 << CC1K_LNA_CURRENT)) | (1 << CC1K_IF_RSSI), (


0x8 << CC1K_PA_HIGHPOWER) | (0x0 << CC1K_PA_LOWPOWER), 


8 << CC1K_REFDIV, 


0x1 << CC1K_LOCK_SELECT, (


1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (


1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((


3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((


5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (


0x1 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

15 << CC1K_VCO_CURRENT) | (3 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x51, 0x00, 0x00, 

0x50, 0xf7, 0x4F, 

0X03, 0x0E, (

4 << CC1K_VCO_CURRENT) | (1 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

11 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 




{ 
0x31, 

0x5c, 0xe0, 0x00, 

0x5c, 0xdb, 0x42, 

0x01, 0xAA, (

8 << CC1K_VCO_CURRENT) | (3 << CC1K_LO_DRIVE), ((


1 << CC1K_BUF_CURRENT) | (2 << CC1K_LNA_CURRENT)) | (1 << CC1K_IF_RSSI), (


0x8 << CC1K_PA_HIGHPOWER) | (0x0 << CC1K_PA_LOWPOWER), 


6 << CC1K_REFDIV, 


0x1 << CC1K_LOCK_SELECT, (


1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (


1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((


3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((


5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (


0x1 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

15 << CC1K_VCO_CURRENT) | (3 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x45, 0x60, 0x00, 

0x45, 0x55, 0xBB, 

0X03, 0x9C, (

8 << CC1K_VCO_CURRENT) | (0 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

13 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (0 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x58, 0x00, 0x00, 

0x57, 0xf6, 0x85, 

0X03, 0x55, (

8 << CC1K_VCO_CURRENT) | (4 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

12 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((
5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) } };
# 14 "attestation.h"
uint64_t attestation(uint32_t nonce);
# 6 "/opt/tinyos-2.0.2/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4299 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4300 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Msg.h"
#line 6
typedef nx_struct CC1KHeader {
  nx_am_addr_t dest;
  nx_am_addr_t source;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) cc1000_header_t;



#line 14
typedef nx_struct CC1KFooter {
  nxle_uint16_t crc;
} __attribute__((packed)) cc1000_footer_t;







#line 18
typedef nx_struct CC1KMetadata {
  nx_int16_t strength_or_preamble;
  nx_uint8_t ack;
  nx_uint16_t time;
  nx_uint8_t sendSecurityMode;
  nx_uint8_t receiveSecurityMode;
} __attribute__((packed)) cc1000_metadata_t;
# 72 "/opt/tinyos-2.0.2/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4301 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4302 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4303 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;
# 49 "/opt/tinyos-2.0.2/tos/platforms/mica2/platform_message.h"
#line 46
typedef union message_header {
  cc1000_header_t cc1k;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc1000_footer_t cc1k;
} message_footer_t;



#line 55
typedef union message_metadata {
  cc1000_metadata_t cc1k;
} message_metadata_t;
# 19 "/opt/tinyos-2.0.2/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 39 "/opt/tinyos-2.0.2/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline)) ;
# 33 "/opt/tinyos-2.0.2/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 30 "/opt/tinyos-2.0.2/tos/types/Leds.h"
enum __nesc_unnamed4304 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
typedef TMicro CC1000CsmaP$BusyWait$precision_tag;
typedef uint16_t CC1000CsmaP$BusyWait$size_type;
typedef uint16_t CC1000CsmaP$RssiNoiseFloor$val_t;
typedef uint16_t CC1000CsmaP$RssiCheckChannel$val_t;
typedef TMilli CC1000CsmaP$WakeupTimer$precision_tag;
typedef uint16_t CC1000CsmaP$RssiPulseCheck$val_t;
typedef uint16_t CC1000SendReceiveP$RssiRx$val_t;
typedef uint16_t CC1000RssiP$ActualRssi$val_t;
typedef uint16_t CC1000RssiP$Rssi$val_t;
typedef TMicro CC1000ControlP$BusyWait$precision_tag;
typedef uint16_t CC1000ControlP$BusyWait$size_type;
typedef uint16_t AdcP$Read$val_t;
typedef uint16_t AdcP$ReadNow$val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t;
enum /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$__nesc_unnamed4305 {
  AdcReadNowClientC$0$ID = 0U, AdcReadNowClientC$0$HAL_ID = 0U
};
typedef uint16_t RandomMlcgP$SeedInit$parameter;
enum HilTimerMilliC$__nesc_unnamed4306 {
  HilTimerMilliC$TIMER_COUNT = 1U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef uint8_t HplAtm128Timer0AsyncP$Timer$timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef TMicro BusyWaitMicroC$BusyWait$precision_tag;
typedef uint16_t BusyWaitMicroC$BusyWait$size_type;
enum AMQueueP$__nesc_unnamed4307 {
  AMQueueP$NUM_CLIENTS = 1U
};
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 51
static error_t MotePlatformP$PlatformInit$init(void );
# 32 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t HplCC1000P$RssiConfig$getRefVoltage(void );
#line 25
static uint8_t HplCC1000P$RssiConfig$getChannel(void );
#line 39
static uint8_t HplCC1000P$RssiConfig$getPrescaler(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t HplCC1000P$PlatformInit$init(void );
# 52 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000.nc"
static void HplCC1000P$HplCC1000$init(void );
#line 66
static uint8_t HplCC1000P$HplCC1000$read(uint8_t addr);
#line 59
static void HplCC1000P$HplCC1000$write(uint8_t addr, uint8_t data);
# 74 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
static void HplCC1000SpiP$HplCC1000Spi$initSlave(void );
#line 69
static void HplCC1000SpiP$HplCC1000Spi$disableIntr(void );
#line 45
static void HplCC1000SpiP$HplCC1000Spi$writeByte(uint8_t data);
#line 64
static void HplCC1000SpiP$HplCC1000Spi$enableIntr(void );
#line 79
static void HplCC1000SpiP$HplCC1000Spi$txMode(void );




static void HplCC1000SpiP$HplCC1000Spi$rxMode(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t HplCC1000SpiP$PlatformInit$init(void );
# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput(void );

static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$get(void );


static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 53 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void );
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b536df81cb0);
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b536df81cb0);
# 46 "/opt/tinyos-2.0.2/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP$Scheduler$init(void );
#line 61
static void SchedulerBasicP$Scheduler$taskLoop(void );
#line 54
static bool SchedulerBasicP$Scheduler$runNextTask(void );
# 59 "/opt/tinyos-2.0.2/tos/interfaces/McuSleep.nc"
static void McuSleepC$McuSleep$sleep(void );
# 44 "/opt/tinyos-2.0.2/tos/interfaces/McuPowerState.nc"
static void McuSleepC$McuPowerState$update(void );
# 92 "/opt/tinyos-2.0.2/tos/interfaces/SplitControl.nc"
static void BlinkC$AMControl$startDone(error_t error);
#line 117
static void BlinkC$AMControl$stopDone(error_t error);
# 49 "/opt/tinyos-2.0.2/tos/interfaces/Boot.nc"
static void BlinkC$Boot$booted(void );
# 99 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
static void BlinkC$AttestationResponseSend$sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
static message_t *BlinkC$AttestationRequestReceive$receive(message_t *msg, void *payload, uint8_t len);
# 89 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
static void CC1000ActiveMessageP$SubSend$sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
static message_t *CC1000ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
# 69 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
static error_t CC1000ActiveMessageP$AMSend$send(
# 40 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x2b536e2713c8, 
# 69 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
am_addr_t addr, message_t *msg, uint8_t len);
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
static message_t *CC1000ActiveMessageP$Snoop$default$receive(
# 42 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x2b536e26f480, 
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
message_t *msg, void *payload, uint8_t len);
#line 67
static message_t *CC1000ActiveMessageP$Receive$default$receive(
# 41 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x2b536e2705f8, 
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
message_t *msg, void *payload, uint8_t len);
# 57 "/opt/tinyos-2.0.2/tos/interfaces/AMPacket.nc"
static am_addr_t CC1000ActiveMessageP$AMPacket$address(void );









static am_addr_t CC1000ActiveMessageP$AMPacket$destination(message_t *amsg);
#line 92
static void CC1000ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 136
static am_id_t CC1000ActiveMessageP$AMPacket$type(message_t *amsg);
#line 151
static void CC1000ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t t);
#line 125
static bool CC1000ActiveMessageP$AMPacket$isForMe(message_t *amsg);
# 83 "/opt/tinyos-2.0.2/tos/interfaces/SplitControl.nc"
static error_t CC1000CsmaP$SplitControl$start(void );
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP$setWakeupTask$runTask(void );
#line 64
static void CC1000CsmaP$startStopDone$runTask(void );
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP$RssiNoiseFloor$readDone(error_t result, CC1000CsmaP$RssiNoiseFloor$val_t val);
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t CC1000CsmaP$Init$init(void );
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP$RssiCheckChannel$readDone(error_t result, CC1000CsmaP$RssiCheckChannel$val_t val);
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP$sleepCheck$runTask(void );
# 72 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
static void CC1000CsmaP$WakeupTimer$fired(void );
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP$adjustSquelch$runTask(void );
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP$RssiPulseCheck$readDone(error_t result, CC1000CsmaP$RssiPulseCheck$val_t val);
# 43 "/opt/tinyos-2.0.2/tos/interfaces/CsmaBackoff.nc"
static uint16_t CC1000CsmaP$CsmaBackoff$default$congestion(message_t *m);
#line 36
static uint16_t CC1000CsmaP$CsmaBackoff$default$initial(message_t *m);
# 25 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
static void CC1000CsmaP$ByteRadio$rts(message_t *msg);
#line 95
static void CC1000CsmaP$ByteRadio$rxDone(void );
#line 74
static void CC1000CsmaP$ByteRadio$idleByte(bool preamble);
#line 44
static void CC1000CsmaP$ByteRadio$sendDone(void );
#line 90
static void CC1000CsmaP$ByteRadio$rx(void );
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Packet.nc"
static uint8_t CC1000SendReceiveP$Packet$payloadLength(message_t *msg);
#line 108
static void *CC1000SendReceiveP$Packet$getPayload(message_t *msg, uint8_t *len);
#line 83
static void CC1000SendReceiveP$Packet$setPayloadLength(message_t *msg, uint8_t len);
# 92 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
static void CC1000SendReceiveP$HplCC1000Spi$dataReady(uint8_t data);
# 64 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
static error_t CC1000SendReceiveP$Send$send(message_t *msg, uint8_t len);
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t CC1000SendReceiveP$Init$init(void );
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static void CC1000SendReceiveP$RssiRx$readDone(error_t result, CC1000SendReceiveP$RssiRx$val_t val);
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void CC1000SendReceiveP$signalPacketSent$runTask(void );
#line 64
static void CC1000SendReceiveP$signalPacketReceived$runTask(void );
# 61 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
static void CC1000SendReceiveP$ByteRadio$listen(void );
#line 85
static bool CC1000SendReceiveP$ByteRadio$syncing(void );
#line 32
static void CC1000SendReceiveP$ByteRadio$cts(void );
#line 50
static void CC1000SendReceiveP$ByteRadio$setPreambleLength(uint16_t bytes);
#line 66
static void CC1000SendReceiveP$ByteRadio$off(void );
#line 39
static message_t *CC1000SendReceiveP$ByteRadio$getTxMessage(void );
# 74 "/opt/tinyos-2.0.2/tos/interfaces/StdControl.nc"
static error_t CC1000SendReceiveP$StdControl$start(void );
# 39 "/opt/tinyos-2.0.2/tos/interfaces/RadioTimeStamping.nc"
static void CC1000SendReceiveP$RadioTimeStamping$default$transmittedSFD(uint16_t time, message_t *p_msg);










static void CC1000SendReceiveP$RadioTimeStamping$default$receivedSFD(uint16_t time);
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static void CC1000RssiP$ActualRssi$readDone(error_t result, CC1000RssiP$ActualRssi$val_t val);
# 48 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
static void CC1000RssiP$cancel(void );
# 92 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
static void CC1000RssiP$Resource$granted(void );
# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static error_t CC1000RssiP$Rssi$read(
# 47 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x2b536e47fe78);
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static void CC1000RssiP$Rssi$default$readDone(
# 47 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x2b536e47fe78, 
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
error_t result, CC1000RssiP$Rssi$val_t val);
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t CC1000SquelchP$Init$init(void );
# 46 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000SquelchP$CC1000Squelch$get(void );






static bool CC1000SquelchP$CC1000Squelch$settled(void );
#line 40
static void CC1000SquelchP$CC1000Squelch$adjust(uint16_t data);
# 49 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
static void CC1000ControlP$CC1000Control$tunePreset(uint8_t freq);
#line 93
static void CC1000ControlP$CC1000Control$biasOn(void );
#line 39
static void CC1000ControlP$CC1000Control$init(void );
#line 85
static void CC1000ControlP$CC1000Control$coreOn(void );
#line 73
static void CC1000ControlP$CC1000Control$txMode(void );
#line 136
static bool CC1000ControlP$CC1000Control$getLOStatus(void );
#line 78
static void CC1000ControlP$CC1000Control$rxMode(void );
#line 68
static void CC1000ControlP$CC1000Control$off(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t Atm128AdcP$Init$init(void );
# 110 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 61 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 147 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
# 74 "/opt/tinyos-2.0.2/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP$AsyncStdControl$start(void );









static error_t Atm128AdcP$AsyncStdControl$stop(void );
# 44 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void );
#line 73
static void HplAtm128AdcP$HplAtm128Adc$enableAdc(void );
#line 49
static void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t admux);
#line 141
static bool HplAtm128AdcP$HplAtm128Adc$cancel(void );
#line 77
static void HplAtm128AdcP$HplAtm128Adc$disableAdc(void );








static void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void );
#line 60
static void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t adcsra);
#line 55
static Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void );










static uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void );
# 69 "/opt/tinyos-2.0.2/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void );
# 43 "/opt/tinyos-2.0.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e608970);
# 51 "/opt/tinyos-2.0.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(
# 55 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e608970);
# 55 "/opt/tinyos-2.0.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e605bb8);
# 49 "/opt/tinyos-2.0.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e605bb8);
# 56 "/opt/tinyos-2.0.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
# 110 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e6097f0);
# 87 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$immediateRequest(
# 54 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e6097f0);
# 78 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e6097f0);
# 92 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e6097f0);
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
# 52 "/opt/tinyos-2.0.2/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 73 "/opt/tinyos-2.0.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void );
#line 81
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested(void );
# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static error_t AdcP$ReadNow$read(
# 49 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b536e681a90);
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static void AdcP$ReadNow$default$readDone(
# 49 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b536e681a90, 
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
error_t result, AdcP$ReadNow$val_t val);
# 32 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(
# 53 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b536e67d060);
# 25 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getChannel(
# 53 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b536e67d060);
# 39 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(
# 53 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b536e67d060);
# 72 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void AdcP$acquiredData$runTask(void );
# 63 "/opt/tinyos-2.0.2/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(
# 24 "/opt/tinyos-2.0.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b536e6a97a8, 
# 63 "/opt/tinyos-2.0.2/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(
# 26 "/opt/tinyos-2.0.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b536e6a6500, 
# 63 "/opt/tinyos-2.0.2/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t val);
# 110 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(
# 27 "/opt/tinyos-2.0.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b536e6a4108);
# 41 "/opt/tinyos-2.0.2/tos/interfaces/Random.nc"
static uint16_t RandomMlcgP$Random$rand16(void );
#line 35
static uint32_t RandomMlcgP$Random$rand32(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t RandomMlcgP$Init$init(void );
# 98 "/opt/tinyos-2.0.2/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 53 "/opt/tinyos-2.0.2/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 49 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 61 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 44 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t control);
# 54 "/opt/tinyos-2.0.2/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void );
# 44 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP$Timer$timer_size HplAtm128Timer0AsyncP$Timer$get(void );
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 67 "/opt/tinyos-2.0.2/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 125 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 72 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 72
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b536e84a9e0);
# 81 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(
# 37 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b536e84a9e0);
# 62 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b536e84a9e0, 
# 62 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
uint32_t dt);
# 71 "/opt/tinyos-2.0.2/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 44 "/opt/tinyos-2.0.2/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 55 "/opt/tinyos-2.0.2/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC$BusyWait$wait(BusyWaitMicroC$BusyWait$size_type dt);
# 69 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
static error_t /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len);
# 89 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
static void /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *msg, error_t error);
# 99 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b536e8e6960, 
# 99 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
message_t *msg, error_t error);
# 64 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b536e8e77d0, 
# 64 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
message_t *msg, uint8_t len);
#line 89
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b536e8e77d0, 
# 89 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
message_t *msg, error_t error);
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 51
static error_t PlatformP$MeasureClock$init(void );
# 42 "/opt/tinyos-2.0.2/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void );






static inline error_t PlatformP$Init$init(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 30
static void MotePlatformP$SerialIdPin$clr(void );
# 23 "/opt/tinyos-2.0.2/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
static void HplCC1000P$PCLK$makeOutput(void );
#line 29
static void HplCC1000P$PCLK$set(void );
static void HplCC1000P$PCLK$clr(void );


static void HplCC1000P$CHP_OUT$makeInput(void );

static void HplCC1000P$PALE$makeOutput(void );
#line 29
static void HplCC1000P$PALE$set(void );
static void HplCC1000P$PALE$clr(void );


static void HplCC1000P$PDATA$makeInput(void );
#line 32
static bool HplCC1000P$PDATA$get(void );


static void HplCC1000P$PDATA$makeOutput(void );
#line 29
static void HplCC1000P$PDATA$set(void );
static void HplCC1000P$PDATA$clr(void );
# 57 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline error_t HplCC1000P$PlatformInit$init(void );
#line 78
static inline void HplCC1000P$HplCC1000$init(void );
#line 94
static void HplCC1000P$HplCC1000$write(uint8_t addr, uint8_t data);
#line 146
static inline uint8_t HplCC1000P$HplCC1000$read(uint8_t addr);
#line 195
static inline uint8_t HplCC1000P$RssiConfig$getChannel(void );



static inline uint8_t HplCC1000P$RssiConfig$getRefVoltage(void );



static inline uint8_t HplCC1000P$RssiConfig$getPrescaler(void );
# 92 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
static void HplCC1000SpiP$HplCC1000Spi$dataReady(uint8_t data);
# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
static void HplCC1000SpiP$SpiSck$makeInput(void );
#line 33
static void HplCC1000SpiP$SpiMiso$makeInput(void );

static void HplCC1000SpiP$SpiMiso$makeOutput(void );
#line 33
static void HplCC1000SpiP$SpiMosi$makeInput(void );

static void HplCC1000SpiP$SpiMosi$makeOutput(void );
#line 33
static void HplCC1000SpiP$OC1C$makeInput(void );
# 53 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
uint8_t HplCC1000SpiP$outgoingByte;

static inline error_t HplCC1000SpiP$PlatformInit$init(void );






void __vector_17(void ) __attribute((signal))   ;







static inline void HplCC1000SpiP$HplCC1000Spi$writeByte(uint8_t data);
#line 82
static inline void HplCC1000SpiP$HplCC1000Spi$enableIntr(void );






static inline void HplCC1000SpiP$HplCC1000Spi$disableIntr(void );






static inline void HplCC1000SpiP$HplCC1000Spi$initSlave(void );








static inline void HplCC1000SpiP$HplCC1000Spi$txMode(void );




static inline void HplCC1000SpiP$HplCC1000Spi$rxMode(void );
# 47 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput(void );
# 33 "/opt/tinyos-2.0.2/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4308 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline error_t MeasureClockC$Init$init(void );
#line 103
static inline uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t RealMainP$SoftwareInit$init(void );
# 49 "/opt/tinyos-2.0.2/tos/interfaces/Boot.nc"
static void RealMainP$Boot$booted(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t RealMainP$PlatformInit$init(void );
# 46 "/opt/tinyos-2.0.2/tos/interfaces/Scheduler.nc"
static void RealMainP$Scheduler$init(void );
#line 61
static void RealMainP$Scheduler$taskLoop(void );
#line 54
static bool RealMainP$Scheduler$runNextTask(void );
# 52 "/opt/tinyos-2.0.2/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b536df81cb0);
# 59 "/opt/tinyos-2.0.2/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 50 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4309 {

  SchedulerBasicP$NUM_TASKS = 12U, 
  SchedulerBasicP$NO_TASK = 255
};

volatile uint8_t SchedulerBasicP$m_head;
volatile uint8_t SchedulerBasicP$m_tail;
volatile uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void );
#line 86
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP$Scheduler$init(void );









static bool SchedulerBasicP$Scheduler$runNextTask(void );
#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void );
#line 159
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/opt/tinyos-2.0.2/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void );
# 58 "/opt/tinyos-2.0.2/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC$getPowerState(void );
#line 97
static inline void McuSleepC$McuSleep$sleep(void );
#line 109
static inline void McuSleepC$McuPowerState$update(void );
# 83 "/opt/tinyos-2.0.2/tos/interfaces/SplitControl.nc"
static error_t BlinkC$AMControl$start(void );
# 108 "/opt/tinyos-2.0.2/tos/interfaces/Packet.nc"
static void *BlinkC$Packet$getPayload(message_t *msg, uint8_t *len);
# 69 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
static error_t BlinkC$AttestationResponseSend$send(am_addr_t addr, message_t *msg, uint8_t len);
# 47 "BlinkC.nc"
bool BlinkC$busy = FALSE;
message_t BlinkC$message;

static inline void BlinkC$Boot$booted(void );



static inline void BlinkC$AMControl$startDone(error_t err);







static inline void BlinkC$AMControl$stopDone(error_t err);



static inline void BlinkC$sendAttestationResponse(uint32_t nonce);
#line 85
static inline void BlinkC$AttestationResponseSend$sendDone(message_t *msg, error_t error);





static inline message_t *BlinkC$AttestationRequestReceive$receive(message_t *msg, void *payload, uint8_t len);
# 64 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
static error_t CC1000ActiveMessageP$SubSend$send(message_t *msg, uint8_t len);
# 49 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static am_addr_t CC1000ActiveMessageP$amAddress(void );
# 99 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
static void CC1000ActiveMessageP$AMSend$sendDone(
# 40 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x2b536e2713c8, 
# 99 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
message_t *msg, error_t error);
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
static message_t *CC1000ActiveMessageP$Snoop$receive(
# 42 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x2b536e26f480, 
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
message_t *msg, void *payload, uint8_t len);
#line 67
static message_t *CC1000ActiveMessageP$Receive$receive(
# 41 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x2b536e2705f8, 
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
message_t *msg, void *payload, uint8_t len);
# 54 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline cc1000_header_t *CC1000ActiveMessageP$getHeader(message_t *amsg);



static error_t CC1000ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 73
static inline void CC1000ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);
#line 87
static inline message_t *CC1000ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 112
static inline am_addr_t CC1000ActiveMessageP$AMPacket$address(void );



static am_addr_t CC1000ActiveMessageP$AMPacket$destination(message_t *amsg);









static inline void CC1000ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC1000ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static inline am_id_t CC1000ActiveMessageP$AMPacket$type(message_t *amsg);




static inline void CC1000ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type);
#line 165
static inline message_t *CC1000ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC1000ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 92 "/opt/tinyos-2.0.2/tos/interfaces/SplitControl.nc"
static void CC1000CsmaP$SplitControl$startDone(error_t error);
#line 117
static void CC1000CsmaP$SplitControl$stopDone(error_t error);
# 55 "/opt/tinyos-2.0.2/tos/lib/timer/BusyWait.nc"
static void CC1000CsmaP$BusyWait$wait(CC1000CsmaP$BusyWait$size_type dt);
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP$setWakeupTask$postTask(void );
#line 56
static error_t CC1000CsmaP$startStopDone$postTask(void );
# 76 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP$cancelRssi(void );
# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP$RssiNoiseFloor$read(void );
# 41 "/opt/tinyos-2.0.2/tos/interfaces/Random.nc"
static uint16_t CC1000CsmaP$Random$rand16(void );
# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP$RssiCheckChannel$read(void );
# 46 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000CsmaP$CC1000Squelch$get(void );






static bool CC1000CsmaP$CC1000Squelch$settled(void );
#line 40
static void CC1000CsmaP$CC1000Squelch$adjust(uint16_t data);
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP$sleepCheck$postTask(void );
# 81 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
static bool CC1000CsmaP$WakeupTimer$isRunning(void );
#line 62
static void CC1000CsmaP$WakeupTimer$startOneShot(uint32_t dt);
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t CC1000CsmaP$ByteRadioInit$init(void );
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP$adjustSquelch$postTask(void );
# 93 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
static void CC1000CsmaP$CC1000Control$biasOn(void );
#line 39
static void CC1000CsmaP$CC1000Control$init(void );
#line 85
static void CC1000CsmaP$CC1000Control$coreOn(void );
#line 78
static void CC1000CsmaP$CC1000Control$rxMode(void );
#line 68
static void CC1000CsmaP$CC1000Control$off(void );
# 74 "/opt/tinyos-2.0.2/tos/interfaces/StdControl.nc"
static error_t CC1000CsmaP$ByteRadioControl$start(void );
# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP$RssiPulseCheck$read(void );
# 43 "/opt/tinyos-2.0.2/tos/interfaces/CsmaBackoff.nc"
static uint16_t CC1000CsmaP$CsmaBackoff$congestion(message_t *m);
#line 36
static uint16_t CC1000CsmaP$CsmaBackoff$initial(message_t *m);
# 61 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
static void CC1000CsmaP$ByteRadio$listen(void );
#line 85
static bool CC1000CsmaP$ByteRadio$syncing(void );
#line 32
static void CC1000CsmaP$ByteRadio$cts(void );
#line 50
static void CC1000CsmaP$ByteRadio$setPreambleLength(uint16_t bytes);
#line 66
static void CC1000CsmaP$ByteRadio$off(void );
#line 39
static message_t *CC1000CsmaP$ByteRadio$getTxMessage(void );
# 108 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
enum CC1000CsmaP$__nesc_unnamed4310 {
#line 108
  CC1000CsmaP$setWakeupTask = 0U
};
#line 108
typedef int CC1000CsmaP$__nesc_sillytask_setWakeupTask[CC1000CsmaP$setWakeupTask];
#line 175
enum CC1000CsmaP$__nesc_unnamed4311 {
#line 175
  CC1000CsmaP$startStopDone = 1U
};
#line 175
typedef int CC1000CsmaP$__nesc_sillytask_startStopDone[CC1000CsmaP$startStopDone];
#line 293
enum CC1000CsmaP$__nesc_unnamed4312 {
#line 293
  CC1000CsmaP$sleepCheck = 2U
};
#line 293
typedef int CC1000CsmaP$__nesc_sillytask_sleepCheck[CC1000CsmaP$sleepCheck];
#line 316
enum CC1000CsmaP$__nesc_unnamed4313 {
#line 316
  CC1000CsmaP$adjustSquelch = 3U
};
#line 316
typedef int CC1000CsmaP$__nesc_sillytask_adjustSquelch[CC1000CsmaP$adjustSquelch];
#line 81
enum CC1000CsmaP$__nesc_unnamed4314 {
  CC1000CsmaP$DISABLED_STATE, 
  CC1000CsmaP$IDLE_STATE, 
  CC1000CsmaP$RX_STATE, 
  CC1000CsmaP$TX_STATE, 
  CC1000CsmaP$POWERDOWN_STATE, 
  CC1000CsmaP$PULSECHECK_STATE
};

enum CC1000CsmaP$__nesc_unnamed4315 {
  CC1000CsmaP$TIME_AFTER_CHECK = 30
};

uint8_t CC1000CsmaP$radioState = CC1000CsmaP$DISABLED_STATE;



#line 95
struct CC1000CsmaP$__nesc_unnamed4316 {
  uint8_t ccaOff : 1;
  uint8_t txPending : 1;
} CC1000CsmaP$f;
uint8_t CC1000CsmaP$count;
uint8_t CC1000CsmaP$clearCount;

int16_t CC1000CsmaP$macDelay;

uint16_t CC1000CsmaP$sleepTime;

uint16_t CC1000CsmaP$rssiForSquelch;



static inline cc1000_metadata_t *CC1000CsmaP$getMetadata(message_t *amsg);



static inline void CC1000CsmaP$enterIdleState(void );




static inline void CC1000CsmaP$enterIdleStateSetWakeup(void );









static inline void CC1000CsmaP$enterPowerDownState(void );




static inline void CC1000CsmaP$enterPulseCheckState(void );




static inline void CC1000CsmaP$enterRxState(void );




static inline void CC1000CsmaP$enterTxState(void );





static void CC1000CsmaP$radioOn(void );







static inline void CC1000CsmaP$radioOff(void );




static inline void CC1000CsmaP$setPreambleLength(message_t *msg);




static inline error_t CC1000CsmaP$Init$init(void );






static inline void CC1000CsmaP$startStopDone$runTask(void );










static error_t CC1000CsmaP$SplitControl$start(void );
#line 220
static void CC1000CsmaP$setWakeup(void );
#line 252
static inline void CC1000CsmaP$setWakeupTask$runTask(void );



static inline void CC1000CsmaP$WakeupTimer$fired(void );
#line 293
static inline void CC1000CsmaP$sleepCheck$runTask(void );
#line 318
static inline void CC1000CsmaP$RssiPulseCheck$readDone(error_t result, uint16_t data);
#line 358
static inline void CC1000CsmaP$ByteRadio$rts(message_t *msg);
#line 374
static inline void CC1000CsmaP$ByteRadio$sendDone(void );




static inline void CC1000CsmaP$congestion(void );



static inline void CC1000CsmaP$ByteRadio$idleByte(bool preamble);
#line 397
static inline void CC1000CsmaP$RssiCheckChannel$readDone(error_t result, uint16_t data);
#line 426
static inline void CC1000CsmaP$ByteRadio$rx(void );



static void CC1000CsmaP$ByteRadio$rxDone(void );







static inline void CC1000CsmaP$adjustSquelch$runTask(void );






static inline void CC1000CsmaP$RssiNoiseFloor$readDone(error_t result, uint16_t data);
#line 474
static inline uint16_t CC1000CsmaP$CsmaBackoff$default$initial(message_t *m);




static inline uint16_t CC1000CsmaP$CsmaBackoff$default$congestion(message_t *m);
#line 557
static inline void CC1000CsmaP$setPreambleLength(message_t *msg);
# 72 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static am_addr_t CC1000SendReceiveP$amAddress(void );
# 74 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
static void CC1000SendReceiveP$HplCC1000Spi$initSlave(void );
#line 69
static void CC1000SendReceiveP$HplCC1000Spi$disableIntr(void );
#line 45
static void CC1000SendReceiveP$HplCC1000Spi$writeByte(uint8_t data);
#line 64
static void CC1000SendReceiveP$HplCC1000Spi$enableIntr(void );
#line 79
static void CC1000SendReceiveP$HplCC1000Spi$txMode(void );




static void CC1000SendReceiveP$HplCC1000Spi$rxMode(void );
# 89 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
static void CC1000SendReceiveP$Send$sendDone(message_t *msg, error_t error);
# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static error_t CC1000SendReceiveP$RssiRx$read(void );
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
static message_t *CC1000SendReceiveP$Receive$receive(message_t *msg, void *payload, uint8_t len);
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t CC1000SendReceiveP$signalPacketSent$postTask(void );
# 73 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
static void CC1000SendReceiveP$CC1000Control$txMode(void );
#line 136
static bool CC1000SendReceiveP$CC1000Control$getLOStatus(void );
#line 78
static void CC1000SendReceiveP$CC1000Control$rxMode(void );
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t CC1000SendReceiveP$signalPacketReceived$postTask(void );
# 25 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
static void CC1000SendReceiveP$ByteRadio$rts(message_t *msg);
#line 95
static void CC1000SendReceiveP$ByteRadio$rxDone(void );
#line 74
static void CC1000SendReceiveP$ByteRadio$idleByte(bool preamble);
#line 44
static void CC1000SendReceiveP$ByteRadio$sendDone(void );
#line 90
static void CC1000SendReceiveP$ByteRadio$rx(void );
# 39 "/opt/tinyos-2.0.2/tos/interfaces/RadioTimeStamping.nc"
static void CC1000SendReceiveP$RadioTimeStamping$transmittedSFD(uint16_t time, message_t *p_msg);










static void CC1000SendReceiveP$RadioTimeStamping$receivedSFD(uint16_t time);
# 376 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
enum CC1000SendReceiveP$__nesc_unnamed4317 {
#line 376
  CC1000SendReceiveP$signalPacketSent = 4U
};
#line 376
typedef int CC1000SendReceiveP$__nesc_sillytask_signalPacketSent[CC1000SendReceiveP$signalPacketSent];
#line 547
enum CC1000SendReceiveP$__nesc_unnamed4318 {
#line 547
  CC1000SendReceiveP$signalPacketReceived = 5U
};
#line 547
typedef int CC1000SendReceiveP$__nesc_sillytask_signalPacketReceived[CC1000SendReceiveP$signalPacketReceived];
#line 77
enum CC1000SendReceiveP$__nesc_unnamed4319 {
  CC1000SendReceiveP$OFF_STATE, 

  CC1000SendReceiveP$INACTIVE_STATE, 

  CC1000SendReceiveP$LISTEN_STATE, 


  CC1000SendReceiveP$SYNC_STATE, 
  CC1000SendReceiveP$RX_STATE, 
  CC1000SendReceiveP$RECEIVED_STATE, 
  CC1000SendReceiveP$SENDING_ACK, 


  CC1000SendReceiveP$TXPREAMBLE_STATE, 
  CC1000SendReceiveP$TXSYNC_STATE, 
  CC1000SendReceiveP$TXDATA_STATE, 
  CC1000SendReceiveP$TXCRC_STATE, 
  CC1000SendReceiveP$TXFLUSH_STATE, 
  CC1000SendReceiveP$TXWAITFORACK_STATE, 
  CC1000SendReceiveP$TXREADACK_STATE, 
  CC1000SendReceiveP$TXDONE_STATE
};

enum CC1000SendReceiveP$__nesc_unnamed4320 {
  CC1000SendReceiveP$SYNC_BYTE1 = 0x33, 
  CC1000SendReceiveP$SYNC_BYTE2 = 0xcc, 
  CC1000SendReceiveP$SYNC_WORD = (CC1000SendReceiveP$SYNC_BYTE1 << 8) | CC1000SendReceiveP$SYNC_BYTE2, 
  CC1000SendReceiveP$ACK_BYTE1 = 0xba, 
  CC1000SendReceiveP$ACK_BYTE2 = 0x83, 
  CC1000SendReceiveP$ACK_WORD = (CC1000SendReceiveP$ACK_BYTE1 << 8) | CC1000SendReceiveP$ACK_BYTE2, 
  CC1000SendReceiveP$ACK_LENGTH = 16, 
  CC1000SendReceiveP$MAX_ACK_WAIT = 18
};

uint8_t CC1000SendReceiveP$radioState;





#line 113
struct CC1000SendReceiveP$__nesc_unnamed4321 {
  uint8_t ack : 1;
  uint8_t txBusy : 1;
  uint8_t invert : 1;
  uint8_t rxBitOffset : 3;
} CC1000SendReceiveP$f;
uint16_t CC1000SendReceiveP$count;
uint16_t CC1000SendReceiveP$runningCrc;

uint16_t CC1000SendReceiveP$rxShiftBuf;
message_t CC1000SendReceiveP$rxBuf;
message_t *CC1000SendReceiveP$rxBufPtr = &CC1000SendReceiveP$rxBuf;

uint16_t CC1000SendReceiveP$preambleLength;
message_t *CC1000SendReceiveP$txBufPtr;
uint8_t CC1000SendReceiveP$nextTxByte;

const_uint8_t CC1000SendReceiveP$ackCode[5] = { 0xab, CC1000SendReceiveP$ACK_BYTE1, CC1000SendReceiveP$ACK_BYTE2, 0xaa, 0xaa };



static inline cc1000_header_t *CC1000SendReceiveP$getHeader(message_t *amsg);



static inline cc1000_footer_t *CC1000SendReceiveP$getFooter(message_t *amsg);



static inline cc1000_metadata_t *CC1000SendReceiveP$getMetadata(message_t *amsg);










static inline void CC1000SendReceiveP$enterInactiveState(void );



static inline void CC1000SendReceiveP$enterListenState(void );




static inline void CC1000SendReceiveP$enterSyncState(void );





static inline void CC1000SendReceiveP$enterRxState(void );







static inline void CC1000SendReceiveP$enterReceivedState(void );



static inline void CC1000SendReceiveP$enterAckState(void );




static inline void CC1000SendReceiveP$enterTxPreambleState(void );






static inline void CC1000SendReceiveP$enterTxSyncState(void );



static inline void CC1000SendReceiveP$enterTxDataState(void );







static inline void CC1000SendReceiveP$enterTxCrcState(void );



static inline void CC1000SendReceiveP$enterTxFlushState(void );




static inline void CC1000SendReceiveP$enterTxWaitForAckState(void );




static inline void CC1000SendReceiveP$enterTxReadAckState(void );





static inline void CC1000SendReceiveP$enterTxDoneState(void );



static inline error_t CC1000SendReceiveP$Init$init(void );





static inline error_t CC1000SendReceiveP$StdControl$start(void );
#line 252
static inline error_t CC1000SendReceiveP$Send$send(message_t *msg, uint8_t len);
#line 270
static inline void CC1000SendReceiveP$ByteRadio$cts(void );
#line 283
static inline void CC1000SendReceiveP$sendNextByte(void );




static inline void CC1000SendReceiveP$txPreamble(void );








static inline void CC1000SendReceiveP$txSync(void );






static inline void CC1000SendReceiveP$txData(void );
#line 320
static inline void CC1000SendReceiveP$txCrc(void );





static inline void CC1000SendReceiveP$txFlush(void );
#line 339
static inline void CC1000SendReceiveP$txWaitForAck(void );










static inline void CC1000SendReceiveP$txReadAck(uint8_t in);
#line 376
static inline void CC1000SendReceiveP$signalPacketSent$runTask(void );
#line 388
static inline void CC1000SendReceiveP$txDone(void );







static inline void CC1000SendReceiveP$packetReceived(void );
static inline void CC1000SendReceiveP$packetReceiveDone(void );

static void CC1000SendReceiveP$ByteRadio$listen(void );






static inline void CC1000SendReceiveP$ByteRadio$off(void );




static inline void CC1000SendReceiveP$listenData(uint8_t in);
#line 427
static inline void CC1000SendReceiveP$syncData(uint8_t in);
#line 475
static inline void CC1000SendReceiveP$RssiRx$readDone(error_t result, uint16_t data);








static inline void CC1000SendReceiveP$rxData(uint8_t in);
#line 516
static inline void CC1000SendReceiveP$packetReceived(void );
#line 536
static inline void CC1000SendReceiveP$ackData(uint8_t in);










static inline void CC1000SendReceiveP$signalPacketReceived$runTask(void );
#line 569
static inline void CC1000SendReceiveP$packetReceiveDone(void );




static inline void CC1000SendReceiveP$HplCC1000Spi$dataReady(uint8_t data);
#line 600
static inline void CC1000SendReceiveP$ByteRadio$setPreambleLength(uint16_t bytes);







static inline message_t *CC1000SendReceiveP$ByteRadio$getTxMessage(void );



static inline bool CC1000SendReceiveP$ByteRadio$syncing(void );









static inline uint8_t CC1000SendReceiveP$Packet$payloadLength(message_t *msg);




static inline void CC1000SendReceiveP$Packet$setPayloadLength(message_t *msg, uint8_t len);







static void *CC1000SendReceiveP$Packet$getPayload(message_t *msg, uint8_t *len);
#line 673
static inline void CC1000SendReceiveP$RadioTimeStamping$default$transmittedSFD(uint16_t time, message_t *msgBuff);
static inline void CC1000SendReceiveP$RadioTimeStamping$default$receivedSFD(uint16_t time);
# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static error_t CC1000RssiP$ActualRssi$read(void );
# 110 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
static error_t CC1000RssiP$Resource$release(void );
#line 87
static error_t CC1000RssiP$Resource$immediateRequest(void );
#line 78
static error_t CC1000RssiP$Resource$request(void );
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static void CC1000RssiP$Rssi$readDone(
# 47 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x2b536e47fe78, 
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
error_t result, CC1000RssiP$Rssi$val_t val);
# 57 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
enum CC1000RssiP$__nesc_unnamed4322 {
  CC1000RssiP$IDLE = 4U, 
  CC1000RssiP$CANCELLED = 5U
};


uint8_t CC1000RssiP$currentOp = CC1000RssiP$IDLE;
uint8_t CC1000RssiP$nextOp;

static inline void CC1000RssiP$cancel(void );




static inline void CC1000RssiP$Resource$granted(void );



static error_t CC1000RssiP$Rssi$read(uint8_t reason);
#line 89
static inline void CC1000RssiP$startNextOp(void );










static inline void CC1000RssiP$ActualRssi$readDone(error_t result, uint16_t data);








static inline void CC1000RssiP$Rssi$default$readDone(uint8_t reason, error_t result, uint16_t data);
# 49 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SquelchP.nc"
uint16_t CC1000SquelchP$clearThreshold = CC1K_SquelchInit;
uint16_t CC1000SquelchP$squelchTable[CC1K_SquelchTableSize];
uint8_t CC1000SquelchP$squelchIndex;
#line 51
uint8_t CC1000SquelchP$squelchCount;

static inline error_t CC1000SquelchP$Init$init(void );








static inline void CC1000SquelchP$CC1000Squelch$adjust(uint16_t data);
#line 91
static inline uint16_t CC1000SquelchP$CC1000Squelch$get(void );



static inline bool CC1000SquelchP$CC1000Squelch$settled(void );
# 55 "/opt/tinyos-2.0.2/tos/lib/timer/BusyWait.nc"
static void CC1000ControlP$BusyWait$wait(CC1000ControlP$BusyWait$size_type dt);
# 52 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000.nc"
static void CC1000ControlP$CC$init(void );
#line 66
static uint8_t CC1000ControlP$CC$read(uint8_t addr);
#line 59
static void CC1000ControlP$CC$write(uint8_t addr, uint8_t data);
# 52 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ControlP.nc"
uint8_t CC1000ControlP$txCurrent;
#line 52
uint8_t CC1000ControlP$rxCurrent;
#line 52
uint8_t CC1000ControlP$power;

enum CC1000ControlP$__nesc_unnamed4323 {
  CC1000ControlP$IF = 150000, 
  CC1000ControlP$FREQ_MIN = 4194304, 
  CC1000ControlP$FREQ_MAX = 16751615
};
#line 90
static void CC1000ControlP$calibrateNow(void );
#line 103
static inline void CC1000ControlP$calibrate(void );
#line 246
static inline void CC1000ControlP$CC1000Control$init(void );
#line 287
static inline void CC1000ControlP$CC1000Control$tunePreset(uint8_t freq);
#line 311
static void CC1000ControlP$CC1000Control$txMode(void );
#line 325
static void CC1000ControlP$CC1000Control$rxMode(void );








static inline void CC1000ControlP$CC1000Control$coreOn(void );









static inline void CC1000ControlP$CC1000Control$biasOn(void );








static void CC1000ControlP$CC1000Control$off(void );
#line 382
static inline bool CC1000ControlP$CC1000Control$getLOStatus(void );
# 110 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 72 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
# 44 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void );
#line 73
static void Atm128AdcP$HplAtm128Adc$enableAdc(void );
#line 49
static void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t admux);
#line 141
static bool Atm128AdcP$HplAtm128Adc$cancel(void );
#line 77
static void Atm128AdcP$HplAtm128Adc$disableAdc(void );








static void Atm128AdcP$HplAtm128Adc$disableInterruption(void );
#line 60
static void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t adcsra);
# 53 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void );
# 82 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 78
struct Atm128AdcP$__nesc_unnamed4324 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP$f;
#line 82
#line 78
struct Atm128AdcP$__nesc_unnamed4324 



Atm128AdcP$nextF;

static inline error_t Atm128AdcP$Init$init(void );
#line 104
static inline error_t Atm128AdcP$AsyncStdControl$start(void );




static inline error_t Atm128AdcP$AsyncStdControl$stop(void );









static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
#line 184
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 208
static inline bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 242
static inline bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 147 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
# 44 "/opt/tinyos-2.0.2/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP$McuPowerState$update(void );
# 40 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void );


static inline uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void );



static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x);


static inline void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x);
#line 70
static inline void HplAtm128AdcP$HplAtm128Adc$enableAdc(void );



static inline void HplAtm128AdcP$HplAtm128Adc$disableAdc(void );




static inline void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void );
#line 100
void __vector_21(void ) __attribute((signal))   ;








static inline bool HplAtm128AdcP$HplAtm128Adc$cancel(void );
# 39 "/opt/tinyos-2.0.2/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$__nesc_unnamed4325 {
  RoundRobinResourceQueueC$0$NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC$0$SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void );
#line 87
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.0.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 55 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e608970);
# 51 "/opt/tinyos-2.0.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(
# 55 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e608970);
# 55 "/opt/tinyos-2.0.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e605bb8);
# 49 "/opt/tinyos-2.0.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e605bb8);
# 69 "/opt/tinyos-2.0.2/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void );
# 73 "/opt/tinyos-2.0.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void );
#line 81
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested(void );
# 92 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(
# 54 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b536e6097f0);
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void );
# 74 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4326 {
#line 74
  ArbiterP$0$grantedTask = 6U
};
#line 74
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4327 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4328 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;



static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 89
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 107
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 126
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
#line 173
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
#line 185
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);









static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 52 "/opt/tinyos-2.0.2/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void );
# 56 "/opt/tinyos-2.0.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release(void );
# 74 "/opt/tinyos-2.0.2/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void );
# 59 "/opt/tinyos-2.0.2/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 63 "/opt/tinyos-2.0.2/tos/interfaces/Read.nc"
static void AdcP$Read$readDone(
# 48 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b536e65de28, 
# 63 "/opt/tinyos-2.0.2/tos/interfaces/Read.nc"
error_t result, AdcP$Read$val_t val);
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
static void AdcP$ReadNow$readDone(
# 49 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b536e681a90, 
# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
error_t result, AdcP$ReadNow$val_t val);
# 32 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getRefVoltage(
# 53 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b536e67d060);
# 25 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getChannel(
# 53 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b536e67d060);
# 39 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getPrescaler(
# 53 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b536e67d060);
# 61 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t AdcP$acquiredData$postTask(void );
# 103 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
enum AdcP$__nesc_unnamed4329 {
#line 103
  AdcP$acquiredData = 7U
};
#line 103
typedef int AdcP$__nesc_sillytask_acquiredData[AdcP$acquiredData];
#line 57
enum AdcP$__nesc_unnamed4330 {
  AdcP$IDLE, 
  AdcP$ACQUIRE_DATA, 
  AdcP$ACQUIRE_DATA_NOW
};




uint8_t AdcP$state;
uint8_t AdcP$client;
uint16_t AdcP$val;

static inline uint8_t AdcP$channel(void );



static inline uint8_t AdcP$refVoltage(void );



static inline uint8_t AdcP$prescaler(void );



static void AdcP$sample(void );



static inline error_t AdcP$startGet(uint8_t newState, uint8_t newClient);
#line 99
static inline error_t AdcP$ReadNow$read(uint8_t c);



static inline void AdcP$acquiredData$runTask(void );




static inline void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
#line 137
static inline uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c);



static inline uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c);



static inline uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c);




static inline void AdcP$ReadNow$default$readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/opt/tinyos-2.0.2/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(
# 24 "/opt/tinyos-2.0.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b536e6a97a8, 
# 63 "/opt/tinyos-2.0.2/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val);
# 110 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(
# 27 "/opt/tinyos-2.0.2/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b536e6a4108);
#line 39
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data);







static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data);
# 41 "/opt/tinyos-2.0.2/tos/system/RandomMlcgP.nc"
uint32_t RandomMlcgP$seed;


static inline error_t RandomMlcgP$Init$init(void );
#line 58
static uint32_t RandomMlcgP$Random$rand32(void );
#line 78
static inline uint16_t RandomMlcgP$Random$rand16(void );
# 44 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 67 "/opt/tinyos-2.0.2/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 71 "/opt/tinyos-2.0.2/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4331 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 49 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 61 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer$overflow(void );
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Timer$get(void );
#line 76
static inline void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x);
#line 94
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void );
#line 122
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static inline uint8_t HplAtm128Timer0AsyncP$Compare$get(void );


static inline void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void );
#line 155
static inline mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void );
#line 178
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 198
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 98 "/opt/tinyos-2.0.2/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 72 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 63 "/opt/tinyos-2.0.2/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4332 {
#line 63
  AlarmToTimerC$0$fired = 8U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 125 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b536e84a9e0);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4333 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 9U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4334 {

  VirtualizeTimerC$0$NUM_TIMERS = 1, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4335 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 88
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 127
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 147
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);









static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num);
#line 192
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.0.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 51 "/opt/tinyos-2.0.2/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;
#line 95
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 44 "/opt/tinyos-2.0.2/tos/platforms/mica/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC$BusyWait$wait(uint16_t dt);
# 99 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
static void /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *msg, error_t error);
# 64 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
static error_t /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *msg, uint8_t len);
# 92 "/opt/tinyos-2.0.2/tos/interfaces/AMPacket.nc"
static void /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 151
static void /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *amsg, am_id_t t);
# 45 "/opt/tinyos-2.0.2/tos/system/AMQueueEntryP.nc"
static inline error_t /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 69 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b536e8e6960, 
# 69 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
am_addr_t addr, message_t *msg, uint8_t len);
# 89 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b536e8e77d0, 
# 89 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
message_t *msg, error_t error);
# 67 "/opt/tinyos-2.0.2/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *msg, uint8_t len);
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 67 "/opt/tinyos-2.0.2/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *amsg);
# 118 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4336 {
#line 118
  AMQueueImplP$0$CancelTask = 10U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4337 {
#line 161
  AMQueueImplP$0$errorTask = 11U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4338 {
  message_t *msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 82
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t *msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 86 "/opt/tinyos-2.0.2/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 86
{
   __asm volatile ("cli");}

#line 103
#line 102
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 112
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 70 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$writeByte(uint8_t data)
#line 70
{
  /* atomic removed: atomic calls only */
#line 71
  HplCC1000SpiP$outgoingByte = data;
}

# 45 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$writeByte(uint8_t data){
#line 45
  HplCC1000SpiP$HplCC1000Spi$writeByte(data);
#line 45
}
#line 45
# 176 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterReceivedState(void )
#line 176
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$RECEIVED_STATE;
}

# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000SendReceiveP$signalPacketReceived$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC1000SendReceiveP$signalPacketReceived);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 569 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$packetReceiveDone(void )
#line 569
{
  CC1000SendReceiveP$signalPacketReceived$postTask();
  CC1000SendReceiveP$enterReceivedState();
}

# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 2);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiMosi$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput();
#line 33
}
#line 33
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiMiso$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput();
#line 33
}
#line 33
# 110 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$rxMode(void )
#line 110
{
  HplCC1000SpiP$SpiMiso$makeInput();
  HplCC1000SpiP$SpiMosi$makeInput();
}

# 84 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$rxMode(void ){
#line 84
  HplCC1000SpiP$HplCC1000Spi$rxMode();
#line 84
}
#line 84
# 78 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000SendReceiveP$CC1000Control$rxMode(void ){
#line 78
  CC1000ControlP$CC1000Control$rxMode();
#line 78
}
#line 78
# 536 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$ackData(uint8_t in)
#line 536
{
  if (++CC1000SendReceiveP$count >= CC1000SendReceiveP$ACK_LENGTH) 
    {
      CC1000SendReceiveP$CC1000Control$rxMode();
      CC1000SendReceiveP$HplCC1000Spi$rxMode();
      CC1000SendReceiveP$packetReceiveDone();
    }
  else {
#line 543
    if (CC1000SendReceiveP$count >= CC1000SendReceiveP$ACK_LENGTH - sizeof CC1000SendReceiveP$ackCode) {
      CC1000SendReceiveP$HplCC1000Spi$writeByte(__extension__ ({
#line 544
        uint16_t __addr16 = (uint16_t )(uint16_t )&CC1000SendReceiveP$ackCode[CC1000SendReceiveP$count + sizeof CC1000SendReceiveP$ackCode - CC1000SendReceiveP$ACK_LENGTH];
#line 544
        uint8_t __result;

#line 544
         __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
      }
      ));
      }
    }
}

# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

#line 264
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}








static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 2;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiMosi$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 3;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiMiso$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeOutput();
#line 35
}
#line 35
# 105 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$txMode(void )
#line 105
{
  HplCC1000SpiP$SpiMiso$makeOutput();
  HplCC1000SpiP$SpiMosi$makeOutput();
}

# 79 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$txMode(void ){
#line 79
  HplCC1000SpiP$HplCC1000Spi$txMode();
#line 79
}
#line 79
# 73 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000SendReceiveP$CC1000Control$txMode(void ){
#line 73
  CC1000ControlP$CC1000Control$txMode();
#line 73
}
#line 73
# 180 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterAckState(void )
#line 180
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$SENDING_ACK;
  CC1000SendReceiveP$count = 0;
}

#line 72
inline static am_addr_t CC1000SendReceiveP$amAddress(void ){
#line 72
  unsigned short __nesc_result;
#line 72

#line 72
  __nesc_result = ActiveMessageAddressC$amAddress();
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
#line 134
static inline cc1000_header_t *CC1000SendReceiveP$getHeader(message_t *amsg)
#line 134
{
  return (cc1000_header_t *)(amsg->data - sizeof(cc1000_header_t ));
}

static inline cc1000_footer_t *CC1000SendReceiveP$getFooter(message_t *amsg)
#line 138
{
  return (cc1000_footer_t *)amsg->footer;
}

#line 516
static inline void CC1000SendReceiveP$packetReceived(void )
#line 516
{
  cc1000_footer_t *rxFooter = CC1000SendReceiveP$getFooter(CC1000SendReceiveP$rxBufPtr);
  cc1000_header_t *rxHeader = CC1000SendReceiveP$getHeader(CC1000SendReceiveP$rxBufPtr);


  __nesc_hton_leuint16(rxFooter->crc.data, __nesc_ntoh_leuint16(rxFooter->crc.data) == CC1000SendReceiveP$runningCrc);


  if (
#line 523
  CC1000SendReceiveP$f.ack && __nesc_ntoh_leuint16(
  rxFooter->crc.data) && __nesc_ntoh_uint16(
  rxHeader->dest.data) == CC1000SendReceiveP$amAddress()) 
    {
      CC1000SendReceiveP$enterAckState();
      CC1000SendReceiveP$CC1000Control$txMode();
      CC1000SendReceiveP$HplCC1000Spi$txMode();
      CC1000SendReceiveP$HplCC1000Spi$writeByte(0xaa);
    }
  else {
    CC1000SendReceiveP$packetReceiveDone();
    }
}

# 95 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP$ByteRadio$rxDone(void ){
#line 95
  CC1000CsmaP$ByteRadio$rxDone();
#line 95
}
#line 95
# 157 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterListenState(void )
#line 157
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$LISTEN_STATE;
  CC1000SendReceiveP$count = 0;
}

#line 484
static inline void CC1000SendReceiveP$rxData(uint8_t in)
#line 484
{
  uint8_t nextByte;
  cc1000_header_t *rxHeader = CC1000SendReceiveP$getHeader(CC1000SendReceiveP$rxBufPtr);
  uint8_t rxLength = __nesc_ntoh_uint8(rxHeader->length.data);


  if (rxLength > 28) 
    {

      CC1000SendReceiveP$enterListenState();
      CC1000SendReceiveP$ByteRadio$rxDone();
      return;
    }

  CC1000SendReceiveP$rxShiftBuf = (CC1000SendReceiveP$rxShiftBuf << 8) | in;
  nextByte = CC1000SendReceiveP$rxShiftBuf >> CC1000SendReceiveP$f.rxBitOffset;
  ((uint8_t *)CC1000SendReceiveP$rxBufPtr)[CC1000SendReceiveP$count++] = nextByte;


  rxLength += (unsigned short )& ((message_t *)0)->data;
  if (CC1000SendReceiveP$count <= rxLength) {
    CC1000SendReceiveP$runningCrc = crcByte(CC1000SendReceiveP$runningCrc, nextByte);
    }

  if (CC1000SendReceiveP$count == rxLength) {
      CC1000SendReceiveP$count = (unsigned short )& ((message_t *)0)->footer + (unsigned short )& ((cc1000_footer_t *)0)->crc;
    }

  if (CC1000SendReceiveP$count == (unsigned short )& ((message_t *)0)->footer + sizeof(cc1000_footer_t )) {
    CC1000SendReceiveP$packetReceived();
    }
}

# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
inline static error_t CC1000SendReceiveP$RssiRx$read(void ){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = CC1000RssiP$Rssi$read(0U);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 674 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$RadioTimeStamping$default$receivedSFD(uint16_t time)
#line 674
{
}

# 50 "/opt/tinyos-2.0.2/tos/interfaces/RadioTimeStamping.nc"
inline static void CC1000SendReceiveP$RadioTimeStamping$receivedSFD(uint16_t time){
#line 50
  CC1000SendReceiveP$RadioTimeStamping$default$receivedSFD(time);
#line 50
}
#line 50
# 66 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP$cancel(void )
#line 66
{
  if (CC1000RssiP$currentOp != CC1000RssiP$IDLE) {
    CC1000RssiP$currentOp = CC1000RssiP$CANCELLED;
    }
}

# 76 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
inline static void CC1000CsmaP$cancelRssi(void ){
#line 76
  CC1000RssiP$cancel();
#line 76
}
#line 76
#line 139
static inline void CC1000CsmaP$enterRxState(void )
#line 139
{
  CC1000CsmaP$cancelRssi();
  CC1000CsmaP$radioState = CC1000CsmaP$RX_STATE;
}

#line 426
static inline void CC1000CsmaP$ByteRadio$rx(void )
#line 426
{
  CC1000CsmaP$enterRxState();
}

# 90 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP$ByteRadio$rx(void ){
#line 90
  CC1000CsmaP$ByteRadio$rx();
#line 90
}
#line 90
# 240 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 168 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterRxState(void )
#line 168
{
  cc1000_header_t *header = CC1000SendReceiveP$getHeader(CC1000SendReceiveP$rxBufPtr);

#line 170
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$RX_STATE;
  __nesc_hton_uint8(header->length.data, sizeof  CC1000SendReceiveP$rxBufPtr->data);
  CC1000SendReceiveP$count = sizeof(message_header_t ) - sizeof(cc1000_header_t );
  CC1000SendReceiveP$runningCrc = 0;
}

#line 427
static inline void CC1000SendReceiveP$syncData(uint8_t in)
#line 427
{








  if (in == 0xaa || in == 0x55) {




    CC1000SendReceiveP$rxShiftBuf = in << 8;
    }
  else {
#line 442
    if (CC1000SendReceiveP$count++ == 0) {
      CC1000SendReceiveP$rxShiftBuf |= in;
      }
    else {
#line 444
      if (CC1000SendReceiveP$count <= 6) 
        {

          uint16_t tmp;
          uint8_t i;


          tmp = CC1000SendReceiveP$rxShiftBuf;
          CC1000SendReceiveP$rxShiftBuf = (CC1000SendReceiveP$rxShiftBuf << 8) | in;

          for (i = 0; i < 8; i++) 
            {
              tmp <<= 1;
              if (in & 0x80) {
                tmp |= 0x1;
                }
#line 459
              in <<= 1;

              if (tmp == CC1000SendReceiveP$SYNC_WORD) 
                {
                  CC1000SendReceiveP$enterRxState();
                  CC1000SendReceiveP$ByteRadio$rx();
                  CC1000SendReceiveP$f.rxBitOffset = 7 - i;
                  CC1000SendReceiveP$RadioTimeStamping$receivedSFD(0);
                  CC1000SendReceiveP$RssiRx$read();
                }
            }
        }
      else {
        CC1000SendReceiveP$enterListenState();
        }
      }
    }
}

# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP$RssiCheckChannel$read(void ){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = CC1000RssiP$Rssi$read(2U);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 608 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline message_t *CC1000SendReceiveP$ByteRadio$getTxMessage(void )
#line 608
{
  return CC1000SendReceiveP$txBufPtr;
}

# 39 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static message_t *CC1000CsmaP$ByteRadio$getTxMessage(void ){
#line 39
  nx_struct message_t *__nesc_result;
#line 39

#line 39
  __nesc_result = CC1000SendReceiveP$ByteRadio$getTxMessage();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 78 "/opt/tinyos-2.0.2/tos/system/RandomMlcgP.nc"
static inline uint16_t RandomMlcgP$Random$rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgP$Random$rand32();
}

# 41 "/opt/tinyos-2.0.2/tos/interfaces/Random.nc"
inline static uint16_t CC1000CsmaP$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgP$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 479 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline uint16_t CC1000CsmaP$CsmaBackoff$default$congestion(message_t *m)
#line 479
{
  return (CC1000CsmaP$Random$rand16() & 0xF) + 1;
}

# 43 "/opt/tinyos-2.0.2/tos/interfaces/CsmaBackoff.nc"
inline static uint16_t CC1000CsmaP$CsmaBackoff$congestion(message_t *m){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = CC1000CsmaP$CsmaBackoff$default$congestion(m);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 379 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$congestion(void )
#line 379
{
  CC1000CsmaP$macDelay = CC1000CsmaP$CsmaBackoff$congestion(CC1000CsmaP$ByteRadio$getTxMessage());
}

static inline void CC1000CsmaP$ByteRadio$idleByte(bool preamble)
#line 383
{
  if (CC1000CsmaP$f.txPending) 
    {
      if (! CC1000CsmaP$f.ccaOff && preamble) {
        CC1000CsmaP$congestion();
        }
      else {
#line 388
        if (CC1000CsmaP$macDelay && ! --CC1000CsmaP$macDelay) 
          {
            CC1000CsmaP$cancelRssi();
            CC1000CsmaP$count = 0;
            CC1000CsmaP$RssiCheckChannel$read();
          }
        }
    }
}

# 74 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP$ByteRadio$idleByte(bool preamble){
#line 74
  CC1000CsmaP$ByteRadio$idleByte(preamble);
#line 74
}
#line 74
# 162 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterSyncState(void )
#line 162
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$SYNC_STATE;
  CC1000SendReceiveP$count = 0;
  CC1000SendReceiveP$rxShiftBuf = 0;
}

#line 411
static inline void CC1000SendReceiveP$listenData(uint8_t in)
#line 411
{
  bool preamble = in == 0xaa || in == 0x55;


  if (preamble) 
    {
      CC1000SendReceiveP$count++;
      if (CC1000SendReceiveP$count > CC1K_ValidPrecursor) {
        CC1000SendReceiveP$enterSyncState();
        }
    }
  else {
#line 422
    CC1000SendReceiveP$count = 0;
    }
  CC1000SendReceiveP$ByteRadio$idleByte(preamble);
}

# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP$setWakeupTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC1000CsmaP$setWakeupTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 114 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$enterIdleState(void )
#line 114
{
  CC1000CsmaP$cancelRssi();
  CC1000CsmaP$radioState = CC1000CsmaP$IDLE_STATE;
}

static inline void CC1000CsmaP$enterIdleStateSetWakeup(void )
#line 119
{
  CC1000CsmaP$enterIdleState();
  CC1000CsmaP$setWakeupTask$postTask();
}

#line 374
static inline void CC1000CsmaP$ByteRadio$sendDone(void )
#line 374
{
  CC1000CsmaP$f.txPending = FALSE;
  CC1000CsmaP$enterIdleStateSetWakeup();
}

# 44 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP$ByteRadio$sendDone(void ){
#line 44
  CC1000CsmaP$ByteRadio$sendDone();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000SendReceiveP$signalPacketSent$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC1000SendReceiveP$signalPacketSent);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 388 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$txDone(void )
#line 388
{
  CC1000SendReceiveP$signalPacketSent$postTask();
  CC1000SendReceiveP$ByteRadio$sendDone();
}

#line 224
static inline void CC1000SendReceiveP$enterTxDoneState(void )
#line 224
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXDONE_STATE;
}

#line 142
static inline cc1000_metadata_t *CC1000SendReceiveP$getMetadata(message_t *amsg)
#line 142
{
  return (cc1000_metadata_t *)((uint8_t *)amsg->footer + sizeof(cc1000_footer_t ));
}

#line 283
static inline void CC1000SendReceiveP$sendNextByte(void )
#line 283
{
  CC1000SendReceiveP$HplCC1000Spi$writeByte(CC1000SendReceiveP$nextTxByte);
  CC1000SendReceiveP$count++;
}

#line 350
static inline void CC1000SendReceiveP$txReadAck(uint8_t in)
#line 350
{
  uint8_t i;

  CC1000SendReceiveP$sendNextByte();

  for (i = 0; i < 8; i++) 
    {
      CC1000SendReceiveP$rxShiftBuf <<= 1;
      if (in & 0x80) {
        CC1000SendReceiveP$rxShiftBuf |= 0x1;
        }
#line 360
      in <<= 1;

      if (CC1000SendReceiveP$rxShiftBuf == CC1000SendReceiveP$ACK_WORD) 
        {
          __nesc_hton_uint8(CC1000SendReceiveP$getMetadata(CC1000SendReceiveP$txBufPtr)->ack.data, 1);
          CC1000SendReceiveP$enterTxDoneState();
          return;
        }
    }
  if (CC1000SendReceiveP$count >= CC1000SendReceiveP$MAX_ACK_WAIT) 
    {
      __nesc_hton_uint8(CC1000SendReceiveP$getMetadata(CC1000SendReceiveP$txBufPtr)->ack.data, 0);
      CC1000SendReceiveP$enterTxDoneState();
    }
}

#line 218
static inline void CC1000SendReceiveP$enterTxReadAckState(void )
#line 218
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXREADACK_STATE;
  CC1000SendReceiveP$rxShiftBuf = 0;
  CC1000SendReceiveP$count = 0;
}

#line 339
static inline void CC1000SendReceiveP$txWaitForAck(void )
#line 339
{
  CC1000SendReceiveP$sendNextByte();
  if (CC1000SendReceiveP$count == 1) 
    {
      CC1000SendReceiveP$HplCC1000Spi$rxMode();
      CC1000SendReceiveP$CC1000Control$rxMode();
    }
  else {
#line 346
    if (CC1000SendReceiveP$count > 3) {
      CC1000SendReceiveP$enterTxReadAckState();
      }
    }
}

#line 213
static inline void CC1000SendReceiveP$enterTxWaitForAckState(void )
#line 213
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXWAITFORACK_STATE;
  CC1000SendReceiveP$count = 0;
}

#line 326
static inline void CC1000SendReceiveP$txFlush(void )
#line 326
{
  CC1000SendReceiveP$sendNextByte();
  if (CC1000SendReceiveP$count > 3) {
    if (CC1000SendReceiveP$f.ack) {
      CC1000SendReceiveP$enterTxWaitForAckState();
      }
    else {
        CC1000SendReceiveP$HplCC1000Spi$rxMode();
        CC1000SendReceiveP$CC1000Control$rxMode();
        CC1000SendReceiveP$enterTxDoneState();
      }
    }
}

#line 208
static inline void CC1000SendReceiveP$enterTxFlushState(void )
#line 208
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXFLUSH_STATE;
  CC1000SendReceiveP$count = 0;
}

#line 320
static inline void CC1000SendReceiveP$txCrc(void )
#line 320
{
  CC1000SendReceiveP$sendNextByte();
  CC1000SendReceiveP$nextTxByte = CC1000SendReceiveP$runningCrc >> 8;
  CC1000SendReceiveP$enterTxFlushState();
}

#line 204
static inline void CC1000SendReceiveP$enterTxCrcState(void )
#line 204
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXCRC_STATE;
}

#line 304
static inline void CC1000SendReceiveP$txData(void )
#line 304
{
  cc1000_header_t *txHeader = CC1000SendReceiveP$getHeader(CC1000SendReceiveP$txBufPtr);

#line 306
  CC1000SendReceiveP$sendNextByte();

  if (CC1000SendReceiveP$count < __nesc_ntoh_uint8(txHeader->length.data) + sizeof(message_header_t )) 
    {
      CC1000SendReceiveP$nextTxByte = ((uint8_t *)CC1000SendReceiveP$txBufPtr)[CC1000SendReceiveP$count];
      CC1000SendReceiveP$runningCrc = crcByte(CC1000SendReceiveP$runningCrc, CC1000SendReceiveP$nextTxByte);
    }
  else 
    {
      CC1000SendReceiveP$nextTxByte = CC1000SendReceiveP$runningCrc;
      CC1000SendReceiveP$enterTxCrcState();
    }
}

#line 673
static inline void CC1000SendReceiveP$RadioTimeStamping$default$transmittedSFD(uint16_t time, message_t *msgBuff)
#line 673
{
}

# 39 "/opt/tinyos-2.0.2/tos/interfaces/RadioTimeStamping.nc"
inline static void CC1000SendReceiveP$RadioTimeStamping$transmittedSFD(uint16_t time, message_t *p_msg){
#line 39
  CC1000SendReceiveP$RadioTimeStamping$default$transmittedSFD(time, p_msg);
#line 39
}
#line 39
# 196 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterTxDataState(void )
#line 196
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXDATA_STATE;



  CC1000SendReceiveP$count = sizeof(message_header_t ) - sizeof(cc1000_header_t ) - 1;
}

#line 297
static inline void CC1000SendReceiveP$txSync(void )
#line 297
{
  CC1000SendReceiveP$sendNextByte();
  CC1000SendReceiveP$nextTxByte = CC1000SendReceiveP$SYNC_BYTE2;
  CC1000SendReceiveP$enterTxDataState();
  CC1000SendReceiveP$RadioTimeStamping$transmittedSFD(0, CC1000SendReceiveP$txBufPtr);
}

#line 192
static inline void CC1000SendReceiveP$enterTxSyncState(void )
#line 192
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXSYNC_STATE;
}

#line 288
static inline void CC1000SendReceiveP$txPreamble(void )
#line 288
{
  CC1000SendReceiveP$sendNextByte();
  if (CC1000SendReceiveP$count >= CC1000SendReceiveP$preambleLength) 
    {
      CC1000SendReceiveP$nextTxByte = CC1000SendReceiveP$SYNC_BYTE1;
      CC1000SendReceiveP$enterTxSyncState();
    }
}

#line 574
static inline void CC1000SendReceiveP$HplCC1000Spi$dataReady(uint8_t data)
#line 574
{
  if (CC1000SendReceiveP$f.invert) {
    data = ~data;
    }
  switch (CC1000SendReceiveP$radioState) 
    {
      default: break;
      case CC1000SendReceiveP$TXPREAMBLE_STATE: CC1000SendReceiveP$txPreamble();
#line 581
      break;
      case CC1000SendReceiveP$TXSYNC_STATE: CC1000SendReceiveP$txSync();
#line 582
      break;
      case CC1000SendReceiveP$TXDATA_STATE: CC1000SendReceiveP$txData();
#line 583
      break;
      case CC1000SendReceiveP$TXCRC_STATE: CC1000SendReceiveP$txCrc();
#line 584
      break;
      case CC1000SendReceiveP$TXFLUSH_STATE: CC1000SendReceiveP$txFlush();
#line 585
      break;
      case CC1000SendReceiveP$TXWAITFORACK_STATE: CC1000SendReceiveP$txWaitForAck();
#line 586
      break;
      case CC1000SendReceiveP$TXREADACK_STATE: CC1000SendReceiveP$txReadAck(data);
#line 587
      break;
      case CC1000SendReceiveP$TXDONE_STATE: CC1000SendReceiveP$txDone();
#line 588
      break;

      case CC1000SendReceiveP$LISTEN_STATE: CC1000SendReceiveP$listenData(data);
#line 590
      break;
      case CC1000SendReceiveP$SYNC_STATE: CC1000SendReceiveP$syncData(data);
#line 591
      break;
      case CC1000SendReceiveP$RX_STATE: CC1000SendReceiveP$rxData(data);
#line 592
      break;
      case CC1000SendReceiveP$SENDING_ACK: CC1000SendReceiveP$ackData(data);
#line 593
      break;
    }
}

# 92 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void HplCC1000SpiP$HplCC1000Spi$dataReady(uint8_t data){
#line 92
  CC1000SendReceiveP$HplCC1000Spi$dataReady(data);
#line 92
}
#line 92
# 86 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 199 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 199
{
}

# 49 "/opt/tinyos-2.0.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x2b536e605bb8){
#line 49
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x2b536e605bb8);
#line 49
}
#line 49
# 56 "/opt/tinyos-2.0.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 109 "/opt/tinyos-2.0.2/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC$McuPowerState$update(void )
#line 109
{
}

# 44 "/opt/tinyos-2.0.2/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 70 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$enableAdc(void )
#line 70
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP$McuPowerState$update();
}

# 73 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$enableAdc(void ){
#line 73
  HplAtm128AdcP$HplAtm128Adc$enableAdc();
#line 73
}
#line 73
# 104 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$AsyncStdControl$start(void )
#line 104
{
  /* atomic removed: atomic calls only */
#line 105
  Atm128AdcP$HplAtm128Adc$enableAdc();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.0.2/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = Atm128AdcP$AsyncStdControl$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 64 "/opt/tinyos-2.0.2/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested(void )
#line 64
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release();
}

# 81 "/opt/tinyos-2.0.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested(void ){
#line 81
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$immediateRequested();
#line 81
}
#line 81
# 189 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 189
{
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x2b536e608970){
#line 51
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x2b536e608970);
#line 51
}
#line 51
# 89 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 89
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 91
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING;
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 96
        FAIL;

#line 96
        return __nesc_temp;
      }
  }
#line 98
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested();
  if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId == id) {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 103
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
  return FAIL;
}

# 87 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP$Resource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$immediateRequest(/*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$HAL_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 51 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x)
#line 51
{
#line 51
  union __nesc_unnamed4339 {
#line 51
    Atm128Adcsra_t f;
#line 51
    uint8_t t;
  } 
#line 51
  c = { .f = x };

#line 51
  return c.t;
}




static inline void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x)
#line 57
{
  * (volatile uint8_t *)(0x06 + 0x20) = HplAtm128AdcP$Adcsra2int(x);
}

# 60 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t adcsra){
#line 60
  HplAtm128AdcP$HplAtm128Adc$setAdcsra(adcsra);
#line 60
}
#line 60
# 103 "/opt/tinyos-2.0.2/tos/platforms/mica/MeasureClockC.nc"
static inline uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void )
#line 103
{

  if (MeasureClockC$cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 107
  if (MeasureClockC$cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 109
  if (MeasureClockC$cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 111
  if (MeasureClockC$cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 113
  if (MeasureClockC$cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 115
  if (MeasureClockC$cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 117
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = MeasureClockC$Atm128Calibrate$adcPrescaler();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x)
#line 50
{
#line 50
  union __nesc_unnamed4340 {
#line 50
    Atm128Admux_t f;
#line 50
    uint8_t t;
  } 
#line 50
  c = { .f = x };

#line 50
  return c.t;
}


static inline void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x)
#line 54
{
  * (volatile uint8_t *)(0x07 + 0x20) = HplAtm128AdcP$Admux2int(x);
}

# 49 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t admux){
#line 49
  HplAtm128AdcP$HplAtm128Adc$setAdmux(admux);
#line 49
}
#line 49
# 119 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 119
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 40 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void )
#line 40
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 44 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void ){
#line 44
  struct __nesc_unnamed4251 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128AdcP$HplAtm128Adc$getAdmux();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 184 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 184
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP$HplAtm128Adc$getAdmux();
  Atm128AdcP$f.precise = Atm128AdcP$isPrecise(admux, channel, refVoltage);
  Atm128AdcP$f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP$HplAtm128Adc$setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adfr = Atm128AdcP$f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP$Atm128Calibrate$adcPrescaler();
    }
#line 204
  adcsr.adps = prescaler;
  Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
}

static inline bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 209
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP$f.multiple = FALSE;
      Atm128AdcP$getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 215
        Atm128AdcP$f.precise;

        {
#line 215
          __nesc_atomic_end(__nesc_atomic); 
#line 215
          return __nesc_temp;
        }
      }
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = Atm128AdcP$Atm128AdcSingle$getData(channel, refVoltage, leftJustify, prescaler);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 195 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P$RssiConfig$getChannel(void )
#line 195
{
  return CHANNEL_RSSI;
}

# 137 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP$Atm128AdcConfig$getChannel(uint8_t arg_0x2b536e67d060){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0x2b536e67d060) {
#line 25
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$ID:
#line 25
      __nesc_result = HplCC1000P$RssiConfig$getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP$Atm128AdcConfig$default$getChannel(arg_0x2b536e67d060);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 70 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$channel(void )
#line 70
{
  return AdcP$Atm128AdcConfig$getChannel(AdcP$client);
}

# 199 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P$RssiConfig$getRefVoltage(void )
#line 199
{
  return ATM128_ADC_VREF_OFF;
}

# 141 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP$Atm128AdcConfig$getRefVoltage(uint8_t arg_0x2b536e67d060){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0x2b536e67d060) {
#line 32
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$ID:
#line 32
      __nesc_result = HplCC1000P$RssiConfig$getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP$Atm128AdcConfig$default$getRefVoltage(arg_0x2b536e67d060);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 74 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$refVoltage(void )
#line 74
{
  return AdcP$Atm128AdcConfig$getRefVoltage(AdcP$client);
}

# 203 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P$RssiConfig$getPrescaler(void )
#line 203
{
  return ATM128_ADC_PRESCALE;
}

# 145 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP$Atm128AdcConfig$getPrescaler(uint8_t arg_0x2b536e67d060){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x2b536e67d060) {
#line 39
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$ID:
#line 39
      __nesc_result = HplCC1000P$RssiConfig$getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP$Atm128AdcConfig$default$getPrescaler(arg_0x2b536e67d060);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 78 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$prescaler(void )
#line 78
{
  return AdcP$Atm128AdcConfig$getPrescaler(AdcP$client);
}

# 59 "/opt/tinyos-2.0.2/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void )
#line 59
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release();
}

# 73 "/opt/tinyos-2.0.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested();
#line 73
}
#line 73
# 87 "/opt/tinyos-2.0.2/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id)
#line 87
{
  /* atomic removed: atomic calls only */
#line 88
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      EBUSY;

#line 93
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.0.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 187 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 187
{
}

# 43 "/opt/tinyos-2.0.2/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x2b536e608970){
#line 43
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x2b536e608970);
#line 43
}
#line 43
# 76 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 76
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 78
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 83
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(id);

#line 83
        return __nesc_temp;
      }
  }
#line 85
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested();
  return SUCCESS;
}

# 78 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP$Resource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(/*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$HAL_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$Scheduler$init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/opt/tinyos-2.0.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$init(void ){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 42 "/opt/tinyos-2.0.2/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 49 "/opt/tinyos-2.0.2/tos/types/TinyError.h"
static inline error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 7);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$OC1C$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput();
#line 33
}
#line 33
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 1);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiSck$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput();
#line 33
}
#line 33
# 55 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline error_t HplCC1000SpiP$PlatformInit$init(void )
#line 55
{
  HplCC1000SpiP$SpiSck$makeInput();
  HplCC1000SpiP$OC1C$makeInput();
  HplCC1000SpiP$HplCC1000Spi$rxMode();
  return SUCCESS;
}

# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 6;
}

# 29 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PCLK$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 7;
}

# 29 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 4;
}

# 29 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PALE$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 7;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 6;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PCLK$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 4;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PALE$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)58U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$CHP_OUT$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput();
#line 33
}
#line 33
# 57 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline error_t HplCC1000P$PlatformInit$init(void )
#line 57
{
  HplCC1000P$CHP_OUT$makeInput();
  HplCC1000P$PALE$makeOutput();
  HplCC1000P$PCLK$makeOutput();
  HplCC1000P$PDATA$makeOutput();
  HplCC1000P$PALE$set();
  HplCC1000P$PDATA$set();
  HplCC1000P$PCLK$set();


  HplCC1000P$HplCC1000$write(CC1K_MAIN, (((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_CORE_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
  HplCC1000P$HplCC1000$write(CC1K_PA_POW, 0);
  return SUCCESS;
}

# 84 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$Init$init(void )
#line 84
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adfr = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = Atm128AdcP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)58U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 23 "/opt/tinyos-2.0.2/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 23
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MotePlatformP$PlatformInit$init();
#line 51
  __nesc_result = ecombine(__nesc_result, HplCC1000P$PlatformInit$init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplCC1000SpiP$PlatformInit$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.0.2/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC$MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC$cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC$cycles = (MeasureClockC$cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.0.2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t RealMainP$PlatformInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.0.2/tos/interfaces/Scheduler.nc"
inline static bool RealMainP$Scheduler$runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 85 "BlinkC.nc"
static inline void BlinkC$AttestationResponseSend$sendDone(message_t *msg, error_t error)
#line 85
{
  if (&BlinkC$message == msg) {
      BlinkC$busy = FALSE;
    }
}

# 99 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
inline static void /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *msg, error_t error){
#line 99
  BlinkC$AttestationResponseSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.0.2/tos/system/AMQueueEntryP.nc"
static inline void /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 207 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x2b536e8e77d0, message_t *msg, error_t error){
#line 89
  switch (arg_0x2b536e8e77d0) {
#line 89
    case 0U:
#line 89
      /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x2b536e8e77d0, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg, FAIL);
}

# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x2b536e8e6960, am_addr_t addr, message_t *msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = CC1000ActiveMessageP$AMSend$send(arg_0x2b536e8e6960, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 622 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline uint8_t CC1000SendReceiveP$Packet$payloadLength(message_t *msg)
#line 622
{
  cc1000_header_t *header = CC1000SendReceiveP$getHeader(msg);

#line 624
  return __nesc_ntoh_uint8(header->length.data);
}

# 67 "/opt/tinyos-2.0.2/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = CC1000SendReceiveP$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 67 "/opt/tinyos-2.0.2/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = CC1000ActiveMessageP$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 54 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline cc1000_header_t *CC1000ActiveMessageP$getHeader(message_t *amsg)
#line 54
{
  return (cc1000_header_t *)(amsg->data - sizeof(cc1000_header_t ));
}

#line 141
static inline am_id_t CC1000ActiveMessageP$AMPacket$type(message_t *amsg)
#line 141
{
  cc1000_header_t *header = CC1000ActiveMessageP$getHeader(amsg);

#line 143
  return __nesc_ntoh_uint8(header->type.data);
}

# 136 "/opt/tinyos-2.0.2/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = CC1000ActiveMessageP$AMPacket$type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 57 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 269 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 288
static __inline  int16_t __nesc_hton_int16(void * target, int16_t value)
#line 288
{
#line 288
  __nesc_hton_uint16(target, value);
#line 288
  return value;
}

#line 288
static __inline  int16_t __nesc_ntoh_int16(const void * source)
#line 288
{
#line 288
  return __nesc_ntoh_uint16(source);
}

# 600 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$ByteRadio$setPreambleLength(uint16_t bytes)
#line 600
{
  /* atomic removed: atomic calls only */
#line 601
  CC1000SendReceiveP$preambleLength = bytes;
}

# 50 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP$ByteRadio$setPreambleLength(uint16_t bytes){
#line 50
  CC1000SendReceiveP$ByteRadio$setPreambleLength(bytes);
#line 50
}
#line 50
# 110 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline cc1000_metadata_t *CC1000CsmaP$getMetadata(message_t *amsg)
#line 110
{
  return (cc1000_metadata_t *)((uint8_t *)amsg->footer + sizeof(cc1000_footer_t ));
}

#line 557
static inline void CC1000CsmaP$setPreambleLength(message_t *msg)
#line 557
{
  cc1000_metadata_t *meta = CC1000CsmaP$getMetadata(msg);
  uint16_t s;
  uint32_t plen;

  if (__nesc_ntoh_int16(meta->strength_or_preamble.data) >= 0) {
    s = CC1000CsmaP$sleepTime;
    }
  else {
#line 565
    s = -(__nesc_ntoh_int16(meta->strength_or_preamble.data) + 1);
    }
#line 566
  __nesc_hton_int16(meta->strength_or_preamble.data, 0);

  if (s == 0) {
    plen = 6;
    }
  else {
#line 571
    plen = (s * 614UL >> 8) + 22;
    }
#line 572
  CC1000CsmaP$ByteRadio$setPreambleLength(plen);
}

#line 474
static inline uint16_t CC1000CsmaP$CsmaBackoff$default$initial(message_t *m)
#line 474
{

  return (CC1000CsmaP$Random$rand16() & 0x1F) + 1;
}

# 36 "/opt/tinyos-2.0.2/tos/interfaces/CsmaBackoff.nc"
inline static uint16_t CC1000CsmaP$CsmaBackoff$initial(message_t *m){
#line 36
  unsigned short __nesc_result;
#line 36

#line 36
  __nesc_result = CC1000CsmaP$CsmaBackoff$default$initial(m);
#line 36

#line 36
  return __nesc_result;
#line 36
}
#line 36
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP$sleepCheck$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC1000CsmaP$sleepCheck);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 358 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$ByteRadio$rts(message_t *msg)
#line 358
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      CC1000CsmaP$f.txPending = TRUE;

      if (CC1000CsmaP$radioState == CC1000CsmaP$POWERDOWN_STATE) {
        CC1000CsmaP$sleepCheck$postTask();
        }
#line 365
      if (! CC1000CsmaP$f.ccaOff) {
        CC1000CsmaP$macDelay = CC1000CsmaP$CsmaBackoff$initial(CC1000CsmaP$ByteRadio$getTxMessage());
        }
      else {
#line 368
        CC1000CsmaP$macDelay = 1;
        }
      CC1000CsmaP$setPreambleLength(msg);
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }
}

# 25 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP$ByteRadio$rts(message_t *msg){
#line 25
  CC1000CsmaP$ByteRadio$rts(msg);
#line 25
}
#line 25
# 252 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP$Send$send(message_t *msg, uint8_t len)
#line 252
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (CC1000SendReceiveP$f.txBusy || CC1000SendReceiveP$radioState == CC1000SendReceiveP$OFF_STATE) 
        {
          unsigned char __nesc_temp = 
#line 256
          FAIL;

          {
#line 256
            __nesc_atomic_end(__nesc_atomic); 
#line 256
            return __nesc_temp;
          }
        }
      else 
#line 257
        {
          cc1000_header_t *header = CC1000SendReceiveP$getHeader(msg);

          CC1000SendReceiveP$f.txBusy = TRUE;
          __nesc_hton_uint8(header->length.data, len);
          CC1000SendReceiveP$txBufPtr = msg;
        }
    }
#line 264
    __nesc_atomic_end(__nesc_atomic); }
  CC1000SendReceiveP$ByteRadio$rts(msg);

  return SUCCESS;
}

# 64 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
inline static error_t CC1000ActiveMessageP$SubSend$send(message_t *msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC1000SendReceiveP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 92 "/opt/tinyos-2.0.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.0.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.0.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.0.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 222 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 98 "/opt/tinyos-2.0.2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.0.2/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 125
  unsigned long __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 88 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 123
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 94 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void )
#line 94
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 44 "/opt/tinyos-2.0.2/tos/platforms/mica/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC$BusyWait$wait(uint16_t dt)
#line 44
{

  if (dt) {
#line 71
     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 55 "/opt/tinyos-2.0.2/tos/lib/timer/BusyWait.nc"
inline static void CC1000CsmaP$BusyWait$wait(CC1000CsmaP$BusyWait$size_type dt){
#line 55
  BusyWaitMicroC$BusyWait$wait(dt);
#line 55
}
#line 55
# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP$RssiPulseCheck$read(void ){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = CC1000RssiP$Rssi$read(3U);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 78 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP$CC1000Control$rxMode(void ){
#line 78
  CC1000ControlP$CC1000Control$rxMode();
#line 78
}
#line 78
# 59 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000.nc"
inline static void CC1000ControlP$CC$write(uint8_t addr, uint8_t data){
#line 59
  HplCC1000P$HplCC1000$write(addr, data);
#line 59
}
#line 59
# 344 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP$CC1000Control$biasOn(void )
#line 344
{
  CC1000ControlP$CC$write(CC1K_MAIN, (((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_RESET_N));
}

# 93 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP$CC1000Control$biasOn(void ){
#line 93
  CC1000ControlP$CC1000Control$biasOn();
#line 93
}
#line 93
# 134 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$enterPulseCheckState(void )
#line 134
{
  CC1000CsmaP$radioState = CC1000CsmaP$PULSECHECK_STATE;
  CC1000CsmaP$count = 0;
}

# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP$RssiNoiseFloor$read(void ){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = CC1000RssiP$Rssi$read(1U);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 612 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline bool CC1000SendReceiveP$ByteRadio$syncing(void )
#line 612
{
  return CC1000SendReceiveP$radioState == CC1000SendReceiveP$SYNC_STATE;
}

# 85 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static bool CC1000CsmaP$ByteRadio$syncing(void ){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = CC1000SendReceiveP$ByteRadio$syncing();
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 256 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$WakeupTimer$fired(void )
#line 256
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      switch (CC1000CsmaP$radioState) 
        {
          case CC1000CsmaP$IDLE_STATE: 



            if (!CC1000CsmaP$ByteRadio$syncing()) 
              {
                CC1000CsmaP$cancelRssi();
                CC1000CsmaP$RssiNoiseFloor$read();
              }
          break;

          case CC1000CsmaP$POWERDOWN_STATE: 

            CC1000CsmaP$enterPulseCheckState();
          CC1000CsmaP$CC1000Control$biasOn();
          break;

          case CC1000CsmaP$PULSECHECK_STATE: 

            CC1000CsmaP$CC1000Control$rxMode();
          CC1000CsmaP$RssiPulseCheck$read();
          CC1000CsmaP$BusyWait$wait(80);
          {
#line 283
            __nesc_atomic_end(__nesc_atomic); 
#line 283
            return;
          }
        }
#line 285
      CC1000CsmaP$setWakeup();
    }
#line 286
    __nesc_atomic_end(__nesc_atomic); }
}

# 192 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x2b536e84a9e0){
#line 72
  switch (arg_0x2b536e84a9e0) {
#line 72
    case 0U:
#line 72
      CC1000CsmaP$WakeupTimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x2b536e84a9e0);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 157 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning;
}

# 81 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
inline static bool CC1000CsmaP$WakeupTimer$isRunning(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(0U);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 62
inline static void CC1000CsmaP$WakeupTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, dt);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 132 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 135
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 135 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 135
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 45
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 45
}
#line 45
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Timer$get(void )
#line 50
{
#line 50
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer0AsyncP$Timer$get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 206 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 206
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.0.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/opt/tinyos-2.0.2/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 127 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 226 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.0.2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 105
  unsigned long __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.0.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 48 "/opt/tinyos-2.0.2/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.0.2/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(uint8_t arg_0x2b536e6a97a8, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val){
#line 63
    /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(arg_0x2b536e6a97a8, result, val);
#line 63
}
#line 63
# 47 "/opt/tinyos-2.0.2/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 110 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(uint8_t arg_0x2b536e6a4108){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
    __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(arg_0x2b536e6a4108);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.0.2/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(client, result, data);
}

# 63 "/opt/tinyos-2.0.2/tos/interfaces/Read.nc"
inline static void AdcP$Read$readDone(uint8_t arg_0x2b536e65de28, error_t result, AdcP$Read$val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(arg_0x2b536e65de28, result, val);
#line 63
}
#line 63
# 103 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP$acquiredData$runTask(void )
#line 103
{
  AdcP$state = AdcP$IDLE;
  AdcP$Read$readDone(AdcP$client, SUCCESS, AdcP$val);
}

#line 86
static inline error_t AdcP$startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP$state = newState;
  AdcP$client = newClient;
  AdcP$sample();

  return SUCCESS;
}





static inline error_t AdcP$ReadNow$read(uint8_t c)
#line 99
{
  return AdcP$startGet(AdcP$ACQUIRE_DATA_NOW, c);
}

# 57 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
inline static error_t CC1000RssiP$ActualRssi$read(void ){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = AdcP$ReadNow$read(/*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$ID);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 71 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP$Resource$granted(void )
#line 71
{
  CC1000RssiP$ActualRssi$read();
}

# 185 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id)
#line 185
{
}

# 92 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x2b536e6097f0){
#line 92
  switch (arg_0x2b536e6097f0) {
#line 92
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$HAL_ID:
#line 92
      CC1000RssiP$Resource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x2b536e6097f0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 173 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void )
#line 173
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
}

# 169 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline message_t *CC1000ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 169
{
  return msg;
}

# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
inline static message_t *CC1000ActiveMessageP$Snoop$receive(am_id_t arg_0x2b536e26f480, message_t *msg, void *payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = CC1000ActiveMessageP$Snoop$default$receive(arg_0x2b536e26f480, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 294 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

#line 343
static __inline  uint64_t __nesc_hton_uint64(void * target, uint64_t value)
#line 343
{
  uint8_t *base = target;

#line 345
  base[7] = value;
  base[6] = value >> 8;
  base[5] = value >> 16;
  base[4] = value >> 24;
  base[3] = value >> 32;
  base[2] = value >> 40;
  base[1] = value >> 48;
  base[0] = value >> 56;
  return value;
}

#line 301
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 301
{
  uint8_t *base = target;

#line 303
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

# 627 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 627
{
  __nesc_hton_uint8(CC1000SendReceiveP$getHeader(msg)->length.data, len);
}

# 83 "/opt/tinyos-2.0.2/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *msg, uint8_t len){
#line 83
  CC1000SendReceiveP$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
inline static error_t /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 146 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void CC1000ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type)
#line 146
{
  cc1000_header_t *header = CC1000ActiveMessageP$getHeader(amsg);

#line 148
  __nesc_hton_uint8(header->type.data, type);
}

# 151 "/opt/tinyos-2.0.2/tos/interfaces/AMPacket.nc"
inline static void /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *amsg, am_id_t t){
#line 151
  CC1000ActiveMessageP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 126 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void CC1000ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 126
{
  cc1000_header_t *header = CC1000ActiveMessageP$getHeader(amsg);

#line 128
  __nesc_hton_uint16(header->dest.data, addr);
}

# 92 "/opt/tinyos-2.0.2/tos/interfaces/AMPacket.nc"
inline static void /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *amsg, am_addr_t addr){
#line 92
  CC1000ActiveMessageP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.0.2/tos/system/AMQueueEntryP.nc"
static inline error_t /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 146);
  return /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 69 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
inline static error_t BlinkC$AttestationResponseSend$send(am_addr_t addr, message_t *msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*BlinkAppC.AttestationResponseSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 108 "/opt/tinyos-2.0.2/tos/interfaces/Packet.nc"
inline static void *BlinkC$Packet$getPayload(message_t *msg, uint8_t *len){
#line 108
  void *__nesc_result;
#line 108

#line 108
  __nesc_result = CC1000SendReceiveP$Packet$getPayload(msg, len);
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 66 "BlinkC.nc"
static inline void BlinkC$sendAttestationResponse(uint32_t nonce)
#line 66
{
  uint64_t checksum;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      checksum = attestation(nonce);
    }
#line 71
    __nesc_atomic_end(__nesc_atomic); }

  if (!BlinkC$busy) {
      AttestationResponseMsg *response = (AttestationResponseMsg *)BlinkC$Packet$getPayload(&BlinkC$message, sizeof(AttestationResponseMsg ));

      __nesc_hton_uint32(response->nonce.data, nonce);
      __nesc_hton_uint64(response->checksum.data, checksum);

      if (BlinkC$AttestationResponseSend$send(AM_BROADCAST_ADDR, &BlinkC$message, sizeof(AttestationResponseMsg )) == SUCCESS) {
          BlinkC$busy = TRUE;
        }
    }
}







static inline message_t *BlinkC$AttestationRequestReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 91
{
  AttestationRequestMsg *in = (AttestationRequestMsg *)payload;

  BlinkC$sendAttestationResponse(__nesc_ntoh_uint32(in->nonce.data));

  return msg;
}

# 165 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline message_t *CC1000ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 165
{
  return msg;
}

# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
inline static message_t *CC1000ActiveMessageP$Receive$receive(am_id_t arg_0x2b536e2705f8, message_t *msg, void *payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x2b536e2705f8) {
#line 67
    case 147:
#line 67
      __nesc_result = BlinkC$AttestationRequestReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = CC1000ActiveMessageP$Receive$default$receive(arg_0x2b536e2705f8, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 49 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
inline static am_addr_t CC1000ActiveMessageP$amAddress(void ){
#line 49
  unsigned short __nesc_result;
#line 49

#line 49
  __nesc_result = ActiveMessageAddressC$amAddress();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
#line 112
static inline am_addr_t CC1000ActiveMessageP$AMPacket$address(void )
#line 112
{
  return CC1000ActiveMessageP$amAddress();
}

#line 136
static inline bool CC1000ActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 136
{
  return CC1000ActiveMessageP$AMPacket$destination(amsg) == CC1000ActiveMessageP$AMPacket$address() || 
  CC1000ActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

#line 87
static inline message_t *CC1000ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 87
{
  if (CC1000ActiveMessageP$AMPacket$isForMe(msg)) {
      return CC1000ActiveMessageP$Receive$receive(CC1000ActiveMessageP$AMPacket$type(msg), msg, payload, len);
    }
  else {
      return CC1000ActiveMessageP$Snoop$receive(CC1000ActiveMessageP$AMPacket$type(msg), msg, payload, len);
    }
}

# 67 "/opt/tinyos-2.0.2/tos/interfaces/Receive.nc"
inline static message_t *CC1000SendReceiveP$Receive$receive(message_t *msg, void *payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC1000ActiveMessageP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 547 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$signalPacketReceived$runTask(void )
#line 547
{
  message_t *pBuf;
  cc1000_header_t *pHeader;

#line 550
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (CC1000SendReceiveP$radioState != CC1000SendReceiveP$RECEIVED_STATE) {
        {
#line 553
          __nesc_atomic_end(__nesc_atomic); 
#line 553
          return;
        }
        }
#line 555
      pBuf = CC1000SendReceiveP$rxBufPtr;
    }
#line 556
    __nesc_atomic_end(__nesc_atomic); }
  pHeader = CC1000SendReceiveP$getHeader(pBuf);
  pBuf = CC1000SendReceiveP$Receive$receive(pBuf, pBuf->data, __nesc_ntoh_uint8(pHeader->length.data));
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (pBuf) {
        CC1000SendReceiveP$rxBufPtr = pBuf;
        }
#line 563
      if (CC1000SendReceiveP$radioState == CC1000SendReceiveP$RECEIVED_STATE) {
        CC1000SendReceiveP$enterListenState();
        }
#line 565
      CC1000SendReceiveP$ByteRadio$rxDone();
    }
#line 566
    __nesc_atomic_end(__nesc_atomic); }
}

# 181 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.0.2/tos/interfaces/AMSend.nc"
inline static void CC1000ActiveMessageP$AMSend$sendDone(am_id_t arg_0x2b536e2713c8, message_t *msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x2b536e2713c8, msg, error);
#line 99
}
#line 99
# 73 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void CC1000ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result)
#line 73
{
  CC1000ActiveMessageP$AMSend$sendDone(CC1000ActiveMessageP$AMPacket$type(msg), msg, result);
}

# 89 "/opt/tinyos-2.0.2/tos/interfaces/Send.nc"
inline static void CC1000SendReceiveP$Send$sendDone(message_t *msg, error_t error){
#line 89
  CC1000ActiveMessageP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 376 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$signalPacketSent$runTask(void )
#line 376
{
  message_t *pBuf;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      pBuf = CC1000SendReceiveP$txBufPtr;
      CC1000SendReceiveP$f.txBusy = FALSE;
      CC1000SendReceiveP$enterListenState();
    }
#line 384
    __nesc_atomic_end(__nesc_atomic); }
  CC1000SendReceiveP$Send$sendDone(pBuf, SUCCESS);
}

# 62 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SquelchP.nc"
static inline void CC1000SquelchP$CC1000Squelch$adjust(uint16_t data)
#line 62
{
  uint16_t squelchTab[CC1K_SquelchTableSize];
  uint8_t i;
#line 64
  uint8_t j;
#line 64
  uint8_t min;
  uint32_t newThreshold;

  CC1000SquelchP$squelchTable[CC1000SquelchP$squelchIndex++] = data;
  if (CC1000SquelchP$squelchIndex >= CC1K_SquelchTableSize) {
    CC1000SquelchP$squelchIndex = 0;
    }
#line 70
  if (CC1000SquelchP$squelchCount <= CC1K_SquelchCount) {
    CC1000SquelchP$squelchCount++;
    }

  memcpy(squelchTab, CC1000SquelchP$squelchTable, sizeof CC1000SquelchP$squelchTable);
  for (j = 0; ; j++) 
    {
      min = 0;
      for (i = 1; i < CC1K_SquelchTableSize; i++) 
        if (squelchTab[i] > squelchTab[min]) {
          min = i;
          }
#line 81
      if (j == 3) {
        break;
        }
#line 83
      squelchTab[min] = 0;
    }

  newThreshold = ((uint32_t )CC1000SquelchP$clearThreshold << 5) + (
  (uint32_t )squelchTab[min] << 1);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 88
    CC1000SquelchP$clearThreshold = newThreshold / 34;
#line 88
    __nesc_atomic_end(__nesc_atomic); }
}

# 40 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Squelch.nc"
inline static void CC1000CsmaP$CC1000Squelch$adjust(uint16_t data){
#line 40
  CC1000SquelchP$CC1000Squelch$adjust(data);
#line 40
}
#line 40
# 438 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$adjustSquelch$runTask(void )
#line 438
{
  uint16_t squelchData;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 441
    squelchData = CC1000CsmaP$rssiForSquelch;
#line 441
    __nesc_atomic_end(__nesc_atomic); }
  CC1000CsmaP$CC1000Squelch$adjust(squelchData);
}

#line 129
static inline void CC1000CsmaP$enterPowerDownState(void )
#line 129
{
  CC1000CsmaP$cancelRssi();
  CC1000CsmaP$radioState = CC1000CsmaP$POWERDOWN_STATE;
}

# 89 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$disableIntr(void )
#line 89
{
  * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
  * (volatile uint8_t *)(0x17 + 0x20) |= 1 << 0;
  * (volatile uint8_t *)(0x18 + 0x20) &= ~(1 << 0);
}

# 69 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$disableIntr(void ){
#line 69
  HplCC1000SpiP$HplCC1000Spi$disableIntr();
#line 69
}
#line 69
# 153 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterInactiveState(void )
#line 153
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$INACTIVE_STATE;
}

#line 406
static inline void CC1000SendReceiveP$ByteRadio$off(void )
#line 406
{
  CC1000SendReceiveP$enterInactiveState();
  CC1000SendReceiveP$HplCC1000Spi$disableIntr();
}

# 66 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP$ByteRadio$off(void ){
#line 66
  CC1000SendReceiveP$ByteRadio$off();
#line 66
}
#line 66
# 68 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP$CC1000Control$off(void ){
#line 68
  CC1000ControlP$CC1000Control$off();
#line 68
}
#line 68
# 158 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$radioOff(void )
#line 158
{
  CC1000CsmaP$CC1000Control$off();
  CC1000CsmaP$ByteRadio$off();
}

# 95 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SquelchP.nc"
static inline bool CC1000SquelchP$CC1000Squelch$settled(void )
#line 95
{
  return CC1000SquelchP$squelchCount > CC1K_SquelchCount;
}

# 53 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Squelch.nc"
inline static bool CC1000CsmaP$CC1000Squelch$settled(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC1000SquelchP$CC1000Squelch$settled();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 293 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$sleepCheck$runTask(void )
#line 293
{
  bool turnOn = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (CC1000CsmaP$f.txPending || !CC1000CsmaP$sleepTime) 
      {
        if (CC1000CsmaP$radioState == CC1000CsmaP$PULSECHECK_STATE || CC1000CsmaP$radioState == CC1000CsmaP$POWERDOWN_STATE) 
          {
            CC1000CsmaP$enterIdleStateSetWakeup();
            turnOn = TRUE;
          }
      }
    else {
#line 305
      if (CC1000CsmaP$CC1000Squelch$settled() && !CC1000CsmaP$ByteRadio$syncing()) 
        {
          CC1000CsmaP$radioOff();
          CC1000CsmaP$enterPowerDownState();
          CC1000CsmaP$setWakeup();
        }
      }
#line 311
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOn) {
    CC1000CsmaP$radioOn();
    }
}

# 334 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP$CC1000Control$coreOn(void )
#line 334
{

  CC1000ControlP$CC$write(CC1K_MAIN, ((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
}

# 85 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP$CC1000Control$coreOn(void ){
#line 85
  CC1000ControlP$CC1000Control$coreOn();
#line 85
}
#line 85
# 82 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$enableIntr(void )
#line 82
{

  * (volatile uint8_t *)(0x0D + 0x20) = 0xc0;
  * (volatile uint8_t *)(0x17 + 0x20) &= ~(1 << 0);
}

# 64 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$enableIntr(void ){
#line 64
  HplCC1000SpiP$HplCC1000Spi$enableIntr();
#line 64
}
#line 64
# 83 "/opt/tinyos-2.0.2/tos/interfaces/SplitControl.nc"
inline static error_t BlinkC$AMControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = CC1000CsmaP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 54 "BlinkC.nc"
static inline void BlinkC$AMControl$startDone(error_t err)
#line 54
{
  if (err == SUCCESS) {
    }
  else {
      BlinkC$AMControl$start();
    }
}

# 92 "/opt/tinyos-2.0.2/tos/interfaces/SplitControl.nc"
inline static void CC1000CsmaP$SplitControl$startDone(error_t error){
#line 92
  BlinkC$AMControl$startDone(error);
#line 92
}
#line 92
# 62 "BlinkC.nc"
static inline void BlinkC$AMControl$stopDone(error_t err)
#line 62
{
}

# 117 "/opt/tinyos-2.0.2/tos/interfaces/SplitControl.nc"
inline static void CC1000CsmaP$SplitControl$stopDone(error_t error){
#line 117
  BlinkC$AMControl$stopDone(error);
#line 117
}
#line 117
# 175 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$startStopDone$runTask(void )
#line 175
{
  uint8_t s;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 179
    s = CC1000CsmaP$radioState;
#line 179
    __nesc_atomic_end(__nesc_atomic); }
  if (s == CC1000CsmaP$DISABLED_STATE) {
    CC1000CsmaP$SplitControl$stopDone(SUCCESS);
    }
  else {
#line 183
    CC1000CsmaP$SplitControl$startDone(SUCCESS);
    }
}

# 382 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ControlP.nc"
static inline bool CC1000ControlP$CC1000Control$getLOStatus(void )
#line 382
{


  return TRUE;
}

# 136 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
inline static bool CC1000SendReceiveP$CC1000Control$getLOStatus(void ){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = CC1000ControlP$CC1000Control$getLOStatus();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 234 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP$StdControl$start(void )
#line 234
{
  /* atomic removed: atomic calls only */
  {
    CC1000SendReceiveP$enterInactiveState();
    CC1000SendReceiveP$f.txBusy = FALSE;
    CC1000SendReceiveP$f.invert = CC1000SendReceiveP$CC1000Control$getLOStatus();
  }
  return SUCCESS;
}

# 74 "/opt/tinyos-2.0.2/tos/interfaces/StdControl.nc"
inline static error_t CC1000CsmaP$ByteRadioControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = CC1000SendReceiveP$StdControl$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP$startStopDone$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC1000CsmaP$startStopDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 252 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$setWakeupTask$runTask(void )
#line 252
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 253
    CC1000CsmaP$setWakeup();
#line 253
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SquelchP.nc"
static inline error_t CC1000SquelchP$Init$init(void )
#line 53
{
  uint8_t i;

  for (i = 0; i < CC1K_SquelchTableSize; i++) 
    CC1000SquelchP$squelchTable[i] = CC1K_SquelchInit;

  return SUCCESS;
}

# 103 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP$calibrate(void )
#line 103
{
  CC1000ControlP$CC$write(CC1K_PA_POW, 0x00);
  CC1000ControlP$CC$write(CC1K_TEST4, 0x3f);


  CC1000ControlP$CC$write(CC1K_MAIN, (1 << CC1K_TX_PD) | (1 << CC1K_RESET_N));

  CC1000ControlP$calibrateNow();


  CC1000ControlP$CC$write(CC1K_MAIN, (((
  1 << CC1K_RXTX) | (
  1 << CC1K_F_REG)) | (
  1 << CC1K_RX_PD)) | (
  1 << CC1K_RESET_N));

  CC1000ControlP$CC$write(CC1K_CURRENT, CC1000ControlP$txCurrent);
  CC1000ControlP$CC$write(CC1K_PA_POW, 0);

  CC1000ControlP$calibrateNow();

  CC1000ControlP$CC1000Control$rxMode();
}

#line 287
static inline void CC1000ControlP$CC1000Control$tunePreset(uint8_t freq)
#line 287
{
  int i;


  for (i = CC1K_FREQ_2A; i <= CC1K_PLL; i++) 
    CC1000ControlP$CC$write(i, __extension__ ({
#line 292
      uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][i];
#line 292
      uint8_t __result;

#line 292
       __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
    }
    ));
#line 293
  CC1000ControlP$CC$write(CC1K_MATCH, __extension__ ({
#line 293
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_MATCH];
#line 293
    uint8_t __result;

#line 293
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  ));
#line 294
  CC1000ControlP$rxCurrent = __extension__ ({
#line 294
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_CURRENT];
#line 294
    uint8_t __result;

#line 294
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 295
  CC1000ControlP$txCurrent = __extension__ ({
#line 295
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_MATCH + 1];
#line 295
    uint8_t __result;

#line 295
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 296
  CC1000ControlP$power = __extension__ ({
#line 296
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_PA_POW];
#line 296
    uint8_t __result;

#line 296
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 298
  CC1000ControlP$calibrate();
}

# 55 "/opt/tinyos-2.0.2/tos/lib/timer/BusyWait.nc"
inline static void CC1000ControlP$BusyWait$wait(CC1000ControlP$BusyWait$size_type dt){
#line 55
  BusyWaitMicroC$BusyWait$wait(dt);
#line 55
}
#line 55
# 78 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline void HplCC1000P$HplCC1000$init(void )
#line 78
{
}

# 52 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000.nc"
inline static void CC1000ControlP$CC$init(void ){
#line 52
  HplCC1000P$HplCC1000$init();
#line 52
}
#line 52
# 246 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP$CC1000Control$init(void )
#line 246
{
  CC1000ControlP$CC$init();


  CC1000ControlP$CC$write(CC1K_MAIN, (((
  1 << CC1K_RX_PD) | (1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (1 << CC1K_BIAS_PD));

  CC1000ControlP$CC1000Control$coreOn();
  CC1000ControlP$BusyWait$wait(2000);



  CC1000ControlP$power = (8 << CC1K_PA_HIGHPOWER) | (0 << CC1K_PA_LOWPOWER);
  CC1000ControlP$CC$write(CC1K_PA_POW, CC1000ControlP$power);


  CC1000ControlP$CC$write(CC1K_LOCK_SELECT, 9 << CC1K_LOCK_SELECT);


  CC1000ControlP$CC$write(CC1K_MODEM2, 0);
  CC1000ControlP$CC$write(CC1K_MODEM1, (((
  3 << CC1K_MLIMIT) | (
  1 << CC1K_LOCK_AVG_MODE)) | (
  3 << CC1K_SETTLING)) | (
  1 << CC1K_MODEM_RESET_N));
  CC1000ControlP$CC$write(CC1K_MODEM0, ((
  5 << CC1K_BAUDRATE) | (
  1 << CC1K_DATA_FORMAT)) | (
  1 << CC1K_XOSC_FREQ));

  CC1000ControlP$CC$write(CC1K_FSCTRL, 1 << CC1K_FS_RESET_N);




  CC1000ControlP$CC1000Control$tunePreset(CC1K_434_845_MHZ);

  CC1000ControlP$CC1000Control$off();
}

# 39 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP$CC1000Control$init(void ){
#line 39
  CC1000ControlP$CC1000Control$init();
#line 39
}
#line 39
# 96 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$initSlave(void )
#line 96
{
  /* atomic removed: atomic calls only */
#line 97
  {
    * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
    * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
  }
}

# 74 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP$HplCC1000Spi$initSlave(void ){
#line 74
  HplCC1000SpiP$HplCC1000Spi$initSlave();
#line 74
}
#line 74
# 228 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP$Init$init(void )
#line 228
{
  CC1000SendReceiveP$f.ack = TRUE;
  CC1000SendReceiveP$HplCC1000Spi$initSlave();
  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t CC1000CsmaP$ByteRadioInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC1000SendReceiveP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 168 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline error_t CC1000CsmaP$Init$init(void )
#line 168
{
  CC1000CsmaP$ByteRadioInit$init();
  CC1000CsmaP$CC1000Control$init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void )
#line 51
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ);
  return SUCCESS;
}

# 44 "/opt/tinyos-2.0.2/tos/system/RandomMlcgP.nc"
static inline error_t RandomMlcgP$Init$init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgP$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 122 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 122
{
#line 122
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 56
  HplAtm128Timer0AsyncP$Compare$start();
#line 56
}
#line 56
# 76 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x)
#line 76
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP$TimerCtrl$setControl(control);
#line 37
}
#line 37
# 198 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 198
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, RandomMlcgP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC1000CsmaP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC1000SquelchP$Init$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 45 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t *)48U & (1 << 7)) != 0;
}

# 32 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static bool HplCC1000P$PDATA$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 47 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PCLK$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 7);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 7);
}

# 30 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PALE$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr();
#line 30
}
#line 30
# 146 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P$HplCC1000$read(uint8_t addr)
#line 146
{
  int cnt;
  uint8_t din;
  uint8_t data = 0;


  addr <<= 1;
  HplCC1000P$PALE$clr();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        HplCC1000P$PDATA$set();
        }
      else {
#line 159
        HplCC1000P$PDATA$clr();
        }
#line 160
      HplCC1000P$PCLK$clr();
      HplCC1000P$PCLK$set();
      addr <<= 1;
    }
  HplCC1000P$PDATA$clr();
  HplCC1000P$PCLK$clr();
  HplCC1000P$PCLK$set();

  HplCC1000P$PDATA$makeInput();
  HplCC1000P$PALE$set();


  for (cnt = 7; cnt >= 0; cnt--) 
    {
      HplCC1000P$PCLK$clr();
      din = HplCC1000P$PDATA$get();
      if (din) {
        data = (data << 1) | 0x01;
        }
      else {
#line 179
        data = (data << 1) & 0xfe;
        }
#line 180
      HplCC1000P$PCLK$set();
    }

  HplCC1000P$PALE$set();
  HplCC1000P$PDATA$makeOutput();
  HplCC1000P$PDATA$set();

  return data;
}

# 66 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000.nc"
inline static uint8_t CC1000ControlP$CC$read(uint8_t addr){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = HplCC1000P$HplCC1000$read(addr);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 50 "BlinkC.nc"
static inline void BlinkC$Boot$booted(void )
#line 50
{
  BlinkC$AMControl$start();
}

# 49 "/opt/tinyos-2.0.2/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 49
  BlinkC$Boot$booted();
#line 49
}
#line 49
# 155 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void )
#line 155
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 170
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/tinyos-2.0.2/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HplAtm128Timer0AsyncP$McuPowerOverride$lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.0.2/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void )
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/opt/tinyos-2.0.2/tos/chips/atm128/atm128hardware.h"
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/tinyos-2.0.2/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC$McuSleep$sleep(void )
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC$getPowerState(), McuSleepC$McuPowerOverride$lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC$atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 104
   __asm volatile ("sei");
   __asm volatile ("sleep");
   __asm volatile ("cli");}

# 59 "/opt/tinyos-2.0.2/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP$McuSleep$sleep(void ){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void )
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 72
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.0.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$taskLoop(void ){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void )
#line 46
{
  return * (volatile uint16_t *)(0x04 + 0x20);
}

#line 43
static inline Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void )
#line 43
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)(0x06 + 0x20);
}

#line 109
static inline bool HplAtm128AdcP$HplAtm128Adc$cancel(void )
#line 109
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP$HplAtm128Adc$getAdcsra();
#line 113
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 130
      oldSr.adif || oldSr.adsc;

#line 130
      return __nesc_temp;
    }
  }
}

# 141 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP$HplAtm128Adc$cancel(void ){
#line 141
  unsigned char __nesc_result;
#line 141

#line 141
  __nesc_result = HplAtm128AdcP$HplAtm128Adc$cancel();
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 242 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 243
{
  return FALSE;
}

# 110 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = Atm128AdcP$Atm128AdcMultiple$default$dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 201 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 201
{
}

# 55 "/opt/tinyos-2.0.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x2b536e605bb8){
#line 55
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x2b536e605bb8);
#line 55
}
#line 55
# 74 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$disableAdc(void )
#line 74
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP$McuPowerState$update();
}

# 77 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$disableAdc(void ){
#line 77
  HplAtm128AdcP$HplAtm128Adc$disableAdc();
#line 77
}
#line 77
# 109 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$AsyncStdControl$stop(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  Atm128AdcP$HplAtm128Adc$disableAdc();

  return SUCCESS;
}

# 84 "/opt/tinyos-2.0.2/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = Atm128AdcP$AsyncStdControl$stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 74 "/opt/tinyos-2.0.2/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void )
#line 74
{
}

# 52 "/opt/tinyos-2.0.2/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void ){
#line 52
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup();
#line 52
}
#line 52
# 69 "/opt/tinyos-2.0.2/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop();
}

# 46 "/opt/tinyos-2.0.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.0.2/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id)
#line 47
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] &= ~(1 << id % 8);
}

#line 69
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 75
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.0.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 56 "/opt/tinyos-2.0.2/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.0.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 107 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId == id) {
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue();
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
          }
        else {
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$default_owner_id;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted();
          }
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
      }
  }
  return FAIL;
}

# 110 "/opt/tinyos-2.0.2/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP$Resource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(/*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$HAL_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 89 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP$startNextOp(void )
#line 89
{
  CC1000RssiP$currentOp = CC1000RssiP$nextOp;
  if (CC1000RssiP$nextOp != CC1000RssiP$IDLE) 
    {
      CC1000RssiP$nextOp = CC1000RssiP$IDLE;
      CC1000RssiP$ActualRssi$read();
    }
  else {
    CC1000RssiP$Resource$release();
    }
}

# 61 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP$ByteRadio$listen(void ){
#line 61
  CC1000SendReceiveP$ByteRadio$listen();
#line 61
}
#line 61
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP$adjustSquelch$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC1000CsmaP$adjustSquelch);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 91 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SquelchP.nc"
static inline uint16_t CC1000SquelchP$CC1000Squelch$get(void )
#line 91
{
  return CC1000SquelchP$clearThreshold;
}

# 46 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Squelch.nc"
inline static uint16_t CC1000CsmaP$CC1000Squelch$get(void ){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = CC1000SquelchP$CC1000Squelch$get();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 318 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$RssiPulseCheck$readDone(error_t result, uint16_t data)
#line 318
{
  if (result != SUCCESS) 
    {

      CC1000CsmaP$sleepCheck$postTask();
      return;
    }






  if (data > CC1000CsmaP$CC1000Squelch$get() - (CC1000CsmaP$CC1000Squelch$get() >> 2)) 
    {
      CC1000CsmaP$sleepCheck$postTask();

      if (data < CC1000CsmaP$CC1000Squelch$get() + (CC1000CsmaP$CC1000Squelch$get() >> 3)) 
        {

          CC1000CsmaP$rssiForSquelch = data;
          CC1000CsmaP$adjustSquelch$postTask();
        }
    }
  else {
#line 342
    if (CC1000CsmaP$count++ > 5) 
      {

        CC1000CsmaP$enterIdleStateSetWakeup();
        CC1000CsmaP$ByteRadio$listen();
      }
    else 
      {
        CC1000CsmaP$RssiPulseCheck$read();
        CC1000CsmaP$BusyWait$wait(80);
      }
    }
}

# 185 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$enterTxPreambleState(void )
#line 185
{
  CC1000SendReceiveP$radioState = CC1000SendReceiveP$TXPREAMBLE_STATE;
  CC1000SendReceiveP$count = 0;
  CC1000SendReceiveP$runningCrc = 0;
  CC1000SendReceiveP$nextTxByte = 0xaa;
}

#line 270
static inline void CC1000SendReceiveP$ByteRadio$cts(void )
#line 270
{

  CC1000SendReceiveP$enterTxPreambleState();
  CC1000SendReceiveP$HplCC1000Spi$writeByte(0xaa);
  CC1000SendReceiveP$CC1000Control$txMode();
  CC1000SendReceiveP$HplCC1000Spi$txMode();
}

# 32 "/opt/tinyos-2.0.2/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP$ByteRadio$cts(void ){
#line 32
  CC1000SendReceiveP$ByteRadio$cts();
#line 32
}
#line 32
# 144 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static inline void CC1000CsmaP$enterTxState(void )
#line 144
{
  CC1000CsmaP$radioState = CC1000CsmaP$TX_STATE;
}

#line 397
static inline void CC1000CsmaP$RssiCheckChannel$readDone(error_t result, uint16_t data)
#line 397
{
  if (result != SUCCESS) 
    {
      /* atomic removed: atomic calls only */
      CC1000CsmaP$macDelay = 1;
      return;
    }

  CC1000CsmaP$count++;
  if (data > CC1000CsmaP$CC1000Squelch$get() + CC1K_SquelchBuffer) {
    CC1000CsmaP$clearCount++;
    }
  else {
#line 409
    CC1000CsmaP$clearCount = 0;
    }

  if (CC1000CsmaP$clearCount >= 1 || CC1000CsmaP$f.ccaOff) 
    {
      CC1000CsmaP$enterTxState();
      CC1000CsmaP$ByteRadio$cts();
    }
  else {
#line 417
    if (CC1000CsmaP$count == CC1K_MaxRSSISamples) {
      CC1000CsmaP$congestion();
      }
    else {
#line 420
      CC1000CsmaP$RssiCheckChannel$read();
      }
    }
}

#line 445
static inline void CC1000CsmaP$RssiNoiseFloor$readDone(error_t result, uint16_t data)
#line 445
{
  if (result != SUCCESS) 
    {

      CC1000CsmaP$sleepCheck$postTask();
      return;
    }

  CC1000CsmaP$rssiForSquelch = data;
  CC1000CsmaP$adjustSquelch$postTask();
  CC1000CsmaP$sleepCheck$postTask();
}

# 475 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP$RssiRx$readDone(error_t result, uint16_t data)
#line 475
{
  cc1000_metadata_t *rxMetadata = CC1000SendReceiveP$getMetadata(CC1000SendReceiveP$rxBufPtr);

  if (result != SUCCESS) {
    __nesc_hton_int16(rxMetadata->strength_or_preamble.data, 0);
    }
  else {
#line 481
    __nesc_hton_int16(rxMetadata->strength_or_preamble.data, data);
    }
}

# 109 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP$Rssi$default$readDone(uint8_t reason, error_t result, uint16_t data)
#line 109
{
}

# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
inline static void CC1000RssiP$Rssi$readDone(uint8_t arg_0x2b536e47fe78, error_t result, CC1000RssiP$Rssi$val_t val){
#line 65
  switch (arg_0x2b536e47fe78) {
#line 65
    case 0U:
#line 65
      CC1000SendReceiveP$RssiRx$readDone(result, val);
#line 65
      break;
#line 65
    case 1U:
#line 65
      CC1000CsmaP$RssiNoiseFloor$readDone(result, val);
#line 65
      break;
#line 65
    case 2U:
#line 65
      CC1000CsmaP$RssiCheckChannel$readDone(result, val);
#line 65
      break;
#line 65
    case 3U:
#line 65
      CC1000CsmaP$RssiPulseCheck$readDone(result, val);
#line 65
      break;
#line 65
    default:
#line 65
      CC1000RssiP$Rssi$default$readDone(arg_0x2b536e47fe78, result, val);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 100 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP$ActualRssi$readDone(error_t result, uint16_t data)
#line 100
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {

      CC1000RssiP$Rssi$readDone(CC1000RssiP$currentOp, result, data);
      CC1000RssiP$startNextOp();
    }
#line 106
    __nesc_atomic_end(__nesc_atomic); }
}

# 150 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP$ReadNow$default$readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 65 "/opt/tinyos-2.0.2/tos/interfaces/ReadNow.nc"
inline static void AdcP$ReadNow$readDone(uint8_t arg_0x2b536e681a90, error_t result, AdcP$ReadNow$val_t val){
#line 65
  switch (arg_0x2b536e681a90) {
#line 65
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC$0$ID:
#line 65
      CC1000RssiP$ActualRssi$readDone(result, val);
#line 65
      break;
#line 65
    default:
#line 65
      AdcP$ReadNow$default$readDone(arg_0x2b536e681a90, result, val);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 56 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP$acquiredData$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(AdcP$acquiredData);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 108 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP$state) 
    {
      case AdcP$ACQUIRE_DATA: 
        if (!precise) {
          AdcP$sample();
          }
        else {
            AdcP$val = data;
            AdcP$acquiredData$postTask();
          }
      break;

      case AdcP$ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP$sample();
          }
        else {
            AdcP$state = AdcP$IDLE;
            AdcP$ReadNow$readDone(AdcP$client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 72 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise){
#line 72
  AdcP$Atm128AdcSingle$dataReady(data, precise);
#line 72
}
#line 72
# 79 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void )
#line 79
{
#line 79
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 86 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$disableInterruption(void ){
#line 86
  HplAtm128AdcP$HplAtm128Adc$disableInterruption();
#line 86
}
#line 86
# 124 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data)
#line 124
{
  bool precise;
#line 125
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP$f.channel;
      precise = Atm128AdcP$f.precise;
      multiple = Atm128AdcP$f.multiple;
    }
#line 133
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP$HplAtm128Adc$disableInterruption();
      Atm128AdcP$Atm128AdcSingle$dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 152
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP$HplAtm128Adc$getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 160
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP$Atm128AdcMultiple$dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP$HplAtm128Adc$setAdmux(admux);

            Atm128AdcP$f = Atm128AdcP$nextF;
            Atm128AdcP$nextF.channel = nextChannel;
            Atm128AdcP$nextF.precise = Atm128AdcP$isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP$HplAtm128Adc$cancel();
          }
#line 180
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 147 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t data){
#line 147
  Atm128AdcP$HplAtm128Adc$dataReady(data);
#line 147
}
#line 147
# 140 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void )
#line 140
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 47 "/opt/tinyos-2.0.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 71 "/opt/tinyos-2.0.2/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 82 "/opt/tinyos-2.0.2/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 82
{
   __asm volatile ("sei");}

# 132 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 132
{
#line 132
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 39 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 149 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 49 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 49
}
#line 49
# 230 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 61 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer$overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
# 62 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 62
{
  register uint8_t temp = * (volatile uint8_t *)(0x0F + 0x20);

#line 64
  * (volatile uint8_t *)(0x0F + 0x20) = HplCC1000SpiP$outgoingByte;
  HplCC1000SpiP$HplCC1000Spi$dataReady(temp);
}

# 81 "/opt/tinyos-2.0.2/tos/chips/atm128/crc.h"
static __attribute((noinline)) uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 325 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP$CC1000Control$rxMode(void )
#line 325
{


  CC1000ControlP$CC$write(CC1K_CURRENT, CC1000ControlP$rxCurrent);
  CC1000ControlP$CC$write(CC1K_PA_POW, 0);
  CC1000ControlP$CC$write(CC1K_MAIN, (1 << CC1K_TX_PD) | (1 << CC1K_RESET_N));
  CC1000ControlP$BusyWait$wait(125);
}

# 94 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static void HplCC1000P$HplCC1000$write(uint8_t addr, uint8_t data)
#line 94
{
  char cnt = 0;


  addr <<= 1;
  HplCC1000P$PALE$clr();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        HplCC1000P$PDATA$set();
        }
      else {
#line 105
        HplCC1000P$PDATA$clr();
        }
#line 106
      HplCC1000P$PCLK$clr();
      HplCC1000P$PCLK$set();
      addr <<= 1;
    }
  HplCC1000P$PDATA$set();
  HplCC1000P$PCLK$clr();
  HplCC1000P$PCLK$set();

  HplCC1000P$PALE$set();


  for (cnt = 0; cnt < 8; cnt++) 
    {
      if (data & 0x80) {
        HplCC1000P$PDATA$set();
        }
      else {
#line 122
        HplCC1000P$PDATA$clr();
        }
#line 123
      HplCC1000P$PCLK$clr();
      HplCC1000P$PCLK$set();
      data <<= 1;
    }
  HplCC1000P$PALE$set();
  HplCC1000P$PDATA$set();
  HplCC1000P$PCLK$set();
}

# 159 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/opt/tinyos-2.0.2/tos/system/RandomMlcgP.nc"
static uint32_t RandomMlcgP$Random$rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 62
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgP$seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgP$seed = mlcg;
  }
  return mlcg;
}

# 75 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000RssiP.nc"
static error_t CC1000RssiP$Rssi$read(uint8_t reason)
#line 75
{
  if (CC1000RssiP$currentOp == CC1000RssiP$IDLE) 
    {
      CC1000RssiP$currentOp = reason;
      if (CC1000RssiP$Resource$immediateRequest() == SUCCESS) {
        CC1000RssiP$ActualRssi$read();
        }
      else {
#line 82
        CC1000RssiP$Resource$request();
        }
    }
  else {
#line 85
    CC1000RssiP$nextOp = reason;
    }
#line 86
  return SUCCESS;
}

# 126 "/opt/tinyos-2.0.2/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void )
#line 126
{
  /* atomic removed: atomic calls only */
#line 127
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$default_owner_id) {
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING) {
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
            {
              unsigned char __nesc_temp = 
#line 131
              SUCCESS;

#line 131
              return __nesc_temp;
            }
          }
        else {
#line 133
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 136
                SUCCESS;

#line 136
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 140
  return FAIL;
}

# 82 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/AdcP.nc"
static void AdcP$sample(void )
#line 82
{
  AdcP$Atm128AdcSingle$getData(AdcP$channel(), AdcP$refVoltage(), FALSE, AdcP$prescaler());
}

# 65 "/opt/tinyos-2.0.2/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id)
#line 65
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] & (1 << id % 8);
}

# 430 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP$ByteRadio$rxDone(void )
#line 430
{
  if (CC1000CsmaP$radioState == CC1000CsmaP$RX_STATE) {
    CC1000CsmaP$enterIdleStateSetWakeup();
    }
}

# 95 "/opt/tinyos-2.0.2/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void )
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC$addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 311 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP$CC1000Control$txMode(void )
#line 311
{

  CC1000ControlP$CC$write(CC1K_MAIN, (((
  1 << CC1K_RXTX) | (
  1 << CC1K_F_REG)) | (
  1 << CC1K_RX_PD)) | (
  1 << CC1K_RESET_N));

  CC1000ControlP$CC$write(CC1K_CURRENT, CC1000ControlP$txCurrent);
  CC1000ControlP$BusyWait$wait(250);
  CC1000ControlP$CC$write(CC1K_PA_POW, CC1000ControlP$power);
  CC1000ControlP$BusyWait$wait(20);
}

# 52 "/opt/tinyos-2.0.2/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 123 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 164
static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x2b536df81cb0){
#line 64
  switch (arg_0x2b536df81cb0) {
#line 64
    case CC1000CsmaP$setWakeupTask:
#line 64
      CC1000CsmaP$setWakeupTask$runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP$startStopDone:
#line 64
      CC1000CsmaP$startStopDone$runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP$sleepCheck:
#line 64
      CC1000CsmaP$sleepCheck$runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP$adjustSquelch:
#line 64
      CC1000CsmaP$adjustSquelch$runTask();
#line 64
      break;
#line 64
    case CC1000SendReceiveP$signalPacketSent:
#line 64
      CC1000SendReceiveP$signalPacketSent$runTask();
#line 64
      break;
#line 64
    case CC1000SendReceiveP$signalPacketReceived:
#line 64
      CC1000SendReceiveP$signalPacketReceived$runTask();
#line 64
      break;
#line 64
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case AdcP$acquiredData:
#line 64
      AdcP$acquiredData$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x2b536df81cb0);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 155 "/opt/tinyos-2.0.2/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t *msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 116 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static am_addr_t CC1000ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 116
{
  cc1000_header_t *header = CC1000ActiveMessageP$getHeader(amsg);

#line 118
  return __nesc_ntoh_uint16(header->dest.data);
}

#line 58
static error_t CC1000ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 60
{
  cc1000_header_t *header = CC1000ActiveMessageP$getHeader(amsg);

#line 62
  __nesc_hton_uint8(header->type.data, id);
  __nesc_hton_uint16(header->dest.data, addr);
  __nesc_hton_uint16(header->source.data, CC1000ActiveMessageP$AMPacket$address());
  __nesc_hton_uint8(header->group.data, TOS_AM_GROUP);
  return CC1000ActiveMessageP$SubSend$send(amsg, len);
}

# 161 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 62 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 220 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP$setWakeup(void )
#line 220
{
  switch (CC1000CsmaP$radioState) 
    {
      case CC1000CsmaP$IDLE_STATE: 




        if (!CC1000CsmaP$WakeupTimer$isRunning()) {
          if (CC1000CsmaP$CC1000Squelch$settled()) 
            {
              if (CC1000CsmaP$sleepTime == 0) {
                CC1000CsmaP$WakeupTimer$startOneShot(CC1K_SquelchIntervalSlow);
                }
              else {

                CC1000CsmaP$WakeupTimer$startOneShot(CC1000CsmaP$TIME_AFTER_CHECK);
                }
            }
          else {
#line 239
            CC1000CsmaP$WakeupTimer$startOneShot(CC1K_SquelchIntervalFast);
            }
          }
#line 240
      break;
      case CC1000CsmaP$PULSECHECK_STATE: 

        CC1000CsmaP$WakeupTimer$startOneShot(1);
      break;
      case CC1000CsmaP$POWERDOWN_STATE: 

        CC1000CsmaP$WakeupTimer$startOneShot(CC1000CsmaP$sleepTime);
      break;
    }
}

# 147 "/opt/tinyos-2.0.2/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 212 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 635 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static void *CC1000SendReceiveP$Packet$getPayload(message_t *msg, uint8_t *len)
#line 635
{
  if (len != (void *)0) {
      cc1000_header_t *header = CC1000SendReceiveP$getHeader(msg);

      *len = __nesc_ntoh_uint8(header->length.data);
    }
  return (void *)msg->data;
}

# 353 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP$CC1000Control$off(void )
#line 353
{

  CC1000ControlP$CC$write(CC1K_MAIN, (((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_CORE_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
  CC1000ControlP$CC$write(CC1K_PA_POW, 0);
}

# 150 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static void CC1000CsmaP$radioOn(void )
#line 150
{
  CC1000CsmaP$CC1000Control$coreOn();
  CC1000CsmaP$BusyWait$wait(2000);
  CC1000CsmaP$CC1000Control$biasOn();
  CC1000CsmaP$BusyWait$wait(200);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    CC1000CsmaP$ByteRadio$listen();
#line 155
    __nesc_atomic_end(__nesc_atomic); }
}

# 399 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000SendReceiveP.nc"
static void CC1000SendReceiveP$ByteRadio$listen(void )
#line 399
{
  CC1000SendReceiveP$enterListenState();
  CC1000SendReceiveP$CC1000Control$rxMode();
  CC1000SendReceiveP$HplCC1000Spi$rxMode();
  CC1000SendReceiveP$HplCC1000Spi$enableIntr();
}

# 186 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000CsmaP.nc"
static error_t CC1000CsmaP$SplitControl$start(void )
#line 186
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (CC1000CsmaP$radioState == CC1000CsmaP$DISABLED_STATE) 
      {
        CC1000CsmaP$ByteRadioControl$start();
        CC1000CsmaP$enterIdleStateSetWakeup();
        CC1000CsmaP$f.txPending = FALSE;
      }
    else 
      {
        unsigned char __nesc_temp = 
#line 195
        SUCCESS;

        {
#line 195
          __nesc_atomic_end(__nesc_atomic); 
#line 195
          return __nesc_temp;
        }
      }
#line 197
    __nesc_atomic_end(__nesc_atomic); }
#line 197
  CC1000CsmaP$radioOn();

  CC1000CsmaP$startStopDone$postTask();

  return SUCCESS;
}

# 90 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP$calibrateNow(void )
#line 90
{

  CC1000ControlP$CC$write(CC1K_CAL, ((
  1 << CC1K_CAL_START) | (
  1 << CC1K_CAL_WAIT)) | (
  6 << CC1K_CAL_ITERATE));
  while ((CC1000ControlP$CC$read(CC1K_CAL) & (1 << CC1K_CAL_COMPLETE)) == 0) 
    ;


  CC1000ControlP$CC$write(CC1K_CAL, (1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE));
}

# 100 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void )
#line 100
{
  uint16_t data = HplAtm128AdcP$HplAtm128Adc$getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP$HplAtm128Adc$dataReady(data);
}

# 178 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 178
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Compare$fired();
}


__attribute((signal))   void __vector_16(void )
#line 184
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Timer$overflow();
}

