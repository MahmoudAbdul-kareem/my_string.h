/* ~~~~~~~~~~ Includes ~~~~~~~~~~~ */
#include <stdio.h>
#include "my_string.h"

/* ~~~~~~ Global Variables ~~~~~~~ */


/* ~~~~ Fucntions Definitions ~~~~ */
void *memchr(const void *const str,const int c, unsigned int n)
{
    void *ret_val = NULL;
    const unsigned char *str_ptr = str;

    if(NULL == str)
    {
        printf("memchr failed, due to NULL pointer passed!!\n");
    }
    else
    {
        while (n--)
        {
            
        }
        
    }


    return ret_val;
}