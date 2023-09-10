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

void *my_memcpy(void *const dest, const void *const src, const unsigned int n)
{
    unsigned char *dest_ptr = dest;
    const unsigned char *src_ptr = src;
    unsigned int iterator = 0;

    if((NULL == dest) || (NULL == src))
    {
        printf("my_memcpy  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        for(iterator = 0; iterator < n; iterator++)
        {
            dest_ptr[iterator] = src_ptr[iterator];
        }
    }

    return dest;
}

void *my_memmove_v1(void *const dest, const void *const src,const unsigned int n)
{
    unsigned int iterator = 0;
    unsigned int overlap_digits = 0;
    unsigned char *const dest_ptr = dest;
    const unsigned char *const src_ptr = src;

    if((NULL == dest) || (NULL == src))
    {
        printf("my_memmove  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        for(iterator = 0; iterator < n; iterator++)
        {
            if((src_ptr + iterator) == dest_ptr)  // overlapping check
            {
                overlap_digits = (src_ptr + n) - dest_ptr;
                break;
            }
        }
        // skip overlapping digits
        for(iterator = 0; iterator < (n - overlap_digits); iterator++)
        {
            dest_ptr[iterator + overlap_digits] = src_ptr[iterator + overlap_digits];
        }
        // copy overlapping digits
        for(iterator = 0; iterator < (overlap_digits); iterator++)
        {
            dest_ptr[iterator] = src_ptr[iterator];
        }
    }
    return dest;
}

void *my_memmove_v2(void *const dest, const void *const src,const unsigned int n)
{
    unsigned char *const dest_ptr = dest;
    const unsigned char *const src_ptr = src;
    unsigned int iterator = 0;

    if((NULL == dest) || (NULL == src))
    {
        printf("my_memmove  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        if(src_ptr > dest_ptr) // NO overlapping 
        {
            // copy forward
            for(iterator = 0; iterator < n; iterator++)
            {
                dest_ptr[iterator] = src_ptr[iterator];
            }
        }
        else if(src_ptr < dest_ptr) // expected overlapping
        {
            // copy backward (to handle overlapping)
            for(iterator = n; iterator > 0; iterator--)
            {
                dest_ptr[iterator - 1] = src_ptr[iterator - 1];
            }
        }
        else {}
    }

    return dest;
}