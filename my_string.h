/**                       Documentation section
==========================================================================
  @file           : my_string.h
  @author         : Mahmoud Abdul-kareem
  @brief          : Contains the header file
==========================================================================
*/

/*========================= File Guard Start ===========================*/
#ifndef _MY_STRING_H
#define _MY_STRING_H

/* ~~~~~~~~~~ Includes ~~~~~~~~~~ */
#include <stdio.h>

/* ~~~~~~ Macros Definition ~~~~~ */

/* ~~~ Variables Declerations ~~~ */

/* ~~~~ Functions Prototypes ~~~~ */
void *my_memchr(const void *const str,const int value, unsigned int n);
int my_memcmp(const void *const str1, const void *const str2, unsigned int n);
void *my_memcpy(void *const dest, const void *const src, const unsigned int n);

#endif
/*=========================== File Guard End ===========================*/


/**                            -History log-
==========================================================================
User           Date                 Brief
==========================================================================
Mahmoud        08Sep2023            Task-1 Intitialize this file.

==========================================================================
*/