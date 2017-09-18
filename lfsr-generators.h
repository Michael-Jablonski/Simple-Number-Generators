
/* Simple-Number-Generators */

#define BIT_0 0x01
#define BIT_1 0x02
#define BIT_2 0x04
#define BIT_3 0x08
#define BIT_4 0x10
#define BIT_5 0x20
#define BIT_6 0x40
#define BIT_7 0x80

unsigned char shift_8_bit_feedback_register(void);
unsigned int  shift_11_bit_feedback_register(void);
unsigned int  shift_16_bit_feedback_register(void);
unsigned long shift_23_bit_feedback_register(void);
unsigned long shift_32_bit_feedback_register(void);
unsigned long long shift_52_bit_feedback_register(void);
unsigned long long shift_64_bit_feedback_register(void);
#pragma once
