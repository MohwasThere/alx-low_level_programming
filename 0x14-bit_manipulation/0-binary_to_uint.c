#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
    int i,count = 0,j = 0;
    unsigned int sum = 0,total = 1;

    if(b[0] == '\0')
        return (0);

  for (i = 0; b[i]; i++)
	{
        count++;
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
    i = count- 1;
        
   while(i >= 0)
    {
        j = i;
        while(j<=count)
        {
            if(j < count - 1)
                total*=2;
            j++;
        }
        if( b[i] == '1')
        {
           sum += total;
        }
        i--;
        total = 1;
    }
    return sum;
} 
