/* ~~~~~~~~~~ Includes ~~~~~~~~~~~ */
#include <stdio.h>
#include "my_string.h"

/* ~~~~~~ Global Variables ~~~~~~~ */


/* ~~~~ Fucntions Definitions ~~~~ */
void *my_memchr(const void *const str,const int value, unsigned int n)
{
    void *ret_val = NULL;
    const unsigned char *str_ptr = str;
    const unsigned char byte_value = (unsigned char)value;

    if(NULL == str)
    {
        printf("memchr failed, due to NULL pointer passed!!\n");
    }
    else
    {
        while (n--)
        {
            if(byte_value == *str_ptr) // is there casting?
            {
                ret_val = (void *)str_ptr;
                break;
            }
            else
            {
                str_ptr++;
            }
        }
    }

    return ret_val;
}