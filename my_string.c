/* ~~~~~~~~~~ Includes ~~~~~~~~~~~ */
#include <stdio.h>
#include <string.h>
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
        if(src_ptr != dest_ptr)
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
        else {}
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

void *my_memset(void *const dest, const int ch, unsigned int n)
{
    unsigned char *dest_ptr = dest;
    const unsigned char value = (const unsigned char)ch;

    if(NULL == dest)
    {
        printf("my_memset  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        while (n--)
        {
            *dest_ptr++ = value;
        }
    }

    return dest;
}

char *my_strcat(char *dest, const char *src)
{
    char *const real_dest = dest;

    if((NULL == dest) || (NULL == src))
    {
        printf("my_strcat  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        // move the dest to the end of the string
        while (*dest)
        {
            dest++;
        }

        // copy src to the end of dest
        while(*src)
        {
            *dest++ = *src++;
        }
        
        // Null-terminate the concatenated string
        *dest = '\0';
    }

    return real_dest;
}

char *my_strncat(char *dest, const char *src, unsigned int n)
{
    char *const real_dest = dest;

    if((NULL == dest) || (NULL == src))
    {
        printf("my_strcat  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        // move the dest to the end of the string
        while (*dest)
        {
            dest++;
        }

        // Copy up to 'n' characters from the src to the dest
        while(n-- && *src)
        {
            *dest++ = *src++;
        }
        
        // Null-terminate the concatenated string
        *dest = '\0';
    }

    return real_dest;
}

char *my_strchr(const char *str, const int c)
{
    char *ret_val = NULL;
    const unsigned char value = (unsigned char)c;

    if(NULL == str)
    {
        printf("my_strchr  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        while (*str)
        {
            if(*str == value)
            {
                ret_val = (char *)str;
                break;
            }
            str++;
        }
    }

    return ret_val;
}

int my_strcmp(const char *str1, const char *str2)
{
    int ret_val = 0;  /* 0 or 1 or -1 */

    if((NULL == str1) || (NULL == str2))
    {
        printf("my_strcmp  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        while((*str1 == *str2) && *str1 && *str2)
        {
            str1++;
            str2++;
        }
        if(*str1 > *str2)
        {
            ret_val = 1;
        }
        else if (*str1 < *str2)
        {
            ret_val = -1;
        }
        else {}

        // you can use this line instead of if elseif else statements.
        // ret_val = *(unsigned char *)str1 - *(unsigned char *)str2;
    }

    return ret_val;
}

int my_strncmp(const char *str1, const char *str2, unsigned int n)
{
    int ret_val = 0;  /* 0 or 1 or -1 */

    if((NULL == str1) || (NULL == str2))
    {
        printf("my_stnrcmp  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        while((*str1 == *str2) && *str1 && *str2 && n--)
        {
            str1++;
            str2++;
        }
        if(*str1 > *str2)
        {
            ret_val = 1;
        }
        else if (*str1 < *str2)
        {
            ret_val = -1;
        }
        else {}

        // you can use this line instead of if elseif else statements.
        // ret_val = *(unsigned char *)str1 - *(unsigned char *)str2;
    }

    return ret_val;
}

char *my_strcpy(char *dest, const char *src)
{
    char *const dest_ptr = dest;

    if((NULL == dest) || (NULL == src))
    {
        printf("my_strcpy  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        // while (*src)
        // {
        //     *dest++ = *src++;
        // }
        while ((*dest++ = *src++));
    }
    
    return dest_ptr;
}

char *my_strncpy(char *dest, const char *src, unsigned int n)
{
    char *const dest_ptr = dest;

    if((NULL == dest) || (NULL == src))
    {
        printf("my_strncpy  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        while ((*dest++ = *src++) && n--); // copy to (n) or the end of (src) string
        
        while (n--) // Fill the remaining space in dest with null characters
        {
            *dest++ = '\0';
        }
    }

    return dest_ptr;
}

unsigned int my_strcspn_v1(const char *str1, const char *const str2)
{
    unsigned int counter = 0;
    unsigned char flag = 1;
    unsigned int iterator = 0;

    if((NULL == str1) || (NULL == str2))
    {
        printf("my_strcspn_v1  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        while (*str1 && flag)
        {
            for(iterator = 0; str2[iterator]; iterator++)
            {
                if(*str1 == str2[iterator])
                {
                    flag = 0;
                    break;
                }
            }
            counter++;
            str1++;
        }
    }

    return (counter - 1);   
}

unsigned int my_strcspn_v2(const char *str1, const char *const str2)
{
    unsigned int counter = 0;

    if((NULL == str1) || (NULL == str2))
    {
        printf("my_strcspn_v2  failed, due to NULL pointer passed!!\n");
    }
    else
    {
        while (*str1)
        {
            if(my_strchr(str2, *str1))
            {
                break;
            }
            str1++;
            counter++;
        }
    }

    return counter;
}