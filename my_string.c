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
        printf("my_memchr failed, due to NULL pointer passed!!\n");
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
int my_memcmp(const void *const str1, const void *const str2, unsigned int n)
{
    int ret_val = 0;   // 0 or 1 or -1
    const unsigned char * str1_ptr = str1;
    const unsigned char * str2_ptr = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("my_memcmp failed, due to NULL pointer passed!!\n");
    }
    else
    {
        while (n--)
        {
            if(*str1_ptr != *str2_ptr)
            {
                if(*str1_ptr > *str2_ptr)
                {
                    ret_val = 1;
                }
                else
                {
                    ret_val = -1;
                }
            }
            else
            {
                str1_ptr++;
                str2_ptr++;
            }
        }
        
    }

    return ret_val;
}