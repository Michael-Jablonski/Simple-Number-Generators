
/* Simple-Number-Generators */

#include <stdio.h>
#include <stdlib.h>

#include "lfsr-generators.h"

int main()
{

    unsigned char r8 = 0;
    unsigned int r11 = 0;
    unsigned int r16 = 0;
        
    printf("8 bits\n");

    while (r8 != 1)                         // when 1 is reached, the cycle starts over
    {
      r8 = shift_8_bit_feedback_register();
      printf("%u\n", r8);
    }

    printf("11 bits\n");

    while (r11 != 1)                         // when 1 is reached, the cycle starts over
    {
        r11 = shift_11_bit_feedback_register();
        printf("%u\n", r11);
    }

    printf("16 bits\n");

    while (r16!= 1)                         // when 1 is reached, the cycle starts over
    {
      r16 = shift_16_bit_feedback_register();
      printf("%u\n", r16);
    }

    // Iterations required to generate the full range of numbers:

    // 8 bits = 255
    // 11 bits = 2,407
    // 16 bits = 65,535
    // 23 bits = 8,388,607
    // 32 bits = 4,294,967,295
    // 52 bits = 4.5036E15
    // 64 bits = 1.8447E19

    // It's not realistic for this program iterate through all of the generators.
   
    return 0;
}

