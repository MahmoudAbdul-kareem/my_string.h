/**                       Documentation section
==========================================================================
  @file           : Application.c
  @author         : Mahmoud Abdul-kareem
  @brief          : Contains the functionality of my application
==========================================================================
*/

/* ~~~~~~~~~~~~~~~~~~~~~~ Includes Section Start ~~~~~~~~~~~~~~~~~~~~~~ */
#include <stdio.h>
#include <string.h>
#include "my_string.h"
/* ~~~~~~~~~~~~~~~~~~~~~~~ Includes Section End ~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section Start ~~~~~~~~~~~~~~~~~~~~ */
// macros:

// global variables:
char *name = "mahmoud abdul_kareem";
char arr_1[30] = "123456789";
char arr_2[30];
/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section End ~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~ Global Decleration Section Start ~~~~~~~~~~~~~~~~~ */
// variables:

// prototypes:
void file(void);
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */


int main()
{
    // void *p = NULL;
    // p = my_memchr(name, ' ', strlen(name));

    // printf("> %s \n", p);

    // const char str[] = "https://www.tutorialspoint.com";
    // const char ch = '.';
    // char *ret;
    // ret = my_memchr(str, ch, strlen(str));
    // printf("String after |%c| is - |%s|\n", ch, ret);

    // printf("> %i \n", my_memcmp(arr_1, arr_2, 5));

    printf("> %s \n", arr_1);
    my_memcpy(arr_2, arr_1, 7);
    printf("> %s \n", arr_2);
    
    return 0;
}


/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file(void)
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */

/**                            History log
==========================================================================
 User           Date                 Brief
==========================================================================
 Mahmoud        04JUl2023            Task-1 Intitialize this file.
 
==========================================================================
*/
