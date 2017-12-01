
/* Simple-Number-Generators */

/*

Michael Jablonski
NR Systems, Inc.
River Heights, Utah

michael@natrescon.com

*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#include "lfsr-generators.h"

/*------------------------------------------------------------------*/
unsigned char shift_8_bit_feedback_register()
{
    // tap bits:  0, 2, 3, 4

    static unsigned char register_8 = 1;

    unsigned char new_bit;

    new_bit = (register_8 & BIT_0) ^ ((register_8 & BIT_2) >> 2) ^ ((register_8 & BIT_3) >> 3) ^ ((register_8 & BIT_4) >> 4);

    register_8 = register_8 >> 1;
    register_8 = register_8 | (new_bit << 7);

    return(register_8);
}

/*------------------------------------------------------------------*/
unsigned int shift_11_bit_feedback_register()
{
    // tap bits:  0, 2

    static unsigned int register_11 = 1;

    unsigned int new_bit;

    new_bit = (register_11 & BIT_0) ^ ((register_11 & BIT_2) >> 2);

    register_11 = register_11 >> 1;
    register_11 = register_11 | (new_bit << 10);

    return(register_11);
}

/*------------------------------------------------------------------*/
unsigned int shift_16_bit_feedback_register()
{
    // tap bits:  0, 2, 3, 5

    static unsigned int register_16 = 1;

    unsigned int new_bit;

    new_bit = (register_16 & BIT_0) ^ ((register_16 & BIT_2) >> 2) ^ ((register_16 & BIT_3) >> 3) ^ ((register_16 & BIT_5) >> 5);

    register_16 = register_16 >> 1;
    register_16 = register_16 | (new_bit << 15);

    return(register_16);
}

/*------------------------------------------------------------------*/
unsigned long shift_23_bit_feedback_register()
{
    // tap bits:  0, 5

    static unsigned long register_23 = 1;

    unsigned long new_bit;

    new_bit = (register_23 & BIT_0) ^ ((register_23 & BIT_5) >> 5);

    register_23 = register_23 >> 1;
    register_23 = register_23 | (new_bit << 22);

    return(register_23);
}

/*------------------------------------------------------------------*/
unsigned long shift_32_bit_feedback_register()
{
    // tap bits:  0, 1, 2, 3, 5, 7

    static unsigned long register_32 = 1;

    unsigned long new_bit;

    new_bit = (register_32 & BIT_0) ^ ((register_32 & BIT_1) >> 1) ^ ((register_32 & BIT_2) >> 2) ^ ((register_32 & BIT_3) >> 3);
    new_bit = new_bit ^ ((register_32 & BIT_5) >> 5) ^ ((register_32 & BIT_7) >> 7);

    register_32 = register_32 >> 1;
    register_32 = register_32 | (new_bit << 31);

    return(register_32);
}

/*------------------------------------------------------------------*/
unsigned long long shift_52_bit_feedback_register()
{
    // tap bits:  0, 3

    static unsigned long long register_52 = 1;

    unsigned long long new_bit;

    new_bit = ((register_52 & BIT_0) ^ ((register_52 & BIT_3) >> 3));

    register_52 = register_52 >> 1;
    register_52 = register_52 | (new_bit << 51);

    return(register_52);
}

/*------------------------------------------------------------------*/
unsigned long long shift_64_bit_feedback_register()
{
    // tap bits:  0, 1, 3, 4

    static unsigned long long register_64 = 1;

    unsigned long long new_bit;

    new_bit = ((register_64 & BIT_0) ^ ((register_64 & BIT_1) >> 1) ^ ((register_64 & BIT_3) >> 3) ^ ((register_64 & BIT_4) >> 4));

    register_64 = register_64 >> 1;
    register_64 = register_64 | (new_bit << 63);

    return(register_64);
}

