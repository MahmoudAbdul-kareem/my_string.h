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

    // printf("> %s \n", arr_1);
    // my_memcpy(arr_2, arr_1, 7);
    // printf("> %s \n", arr_2);

    // char str[] = "Hello, World!";
    // printf("> %s \n", str);
    // my_memmove_v2(str + 7, str + 1, 7);
    // printf("> %s \n", str);

    // // Hello, World!
    // // Hello, ello, W 

    // printf("> %s \n", arr_2);
    // my_memset(arr_2, '*', 31);
    // printf("> %s \n", arr_2);

    // char str[20] = "Hello, World!";
    // my_memset(str + 7, 'X', 5); // Set 'World' to 'XXXXX'

    // printf("%s\n", str); // Output: "Hello, XXXXX!"

    // printf("%s\n", arr_2);
    // my_strncat(arr_2, arr_1, 5);
    // printf("%s\n", arr_2);

    // char *p = my_strchr(arr_1, '1');
    // printf("%c \n", *p);

    // printf("> %i \n", my_strcmp(arr_1, arr_2));

    // printf("> %s \n", arr_2);
    // my_strcpy(arr_2, arr_1);
    // printf("> %s \n", arr_2);

    // char src[40];
    // char dest[100];
    
    // my_memset(dest, '\0', sizeof(dest));
    // my_strcpy(src, "This is MahmoudAbdul-kareem");
    // my_strcpy(dest, src);

    // printf("Final copied string : %s\n", dest);
    // // Final copied string : This is MahmoudAbdul-kareem
    
    int len;
    const char str1[] = "ABCDEF4964910";
    const char str2[] = "013";

    len = my_strcspn_v1(str1, str2);
    printf("> %i \n", len); // 11

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
