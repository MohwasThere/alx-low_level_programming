#include "main.h"
#include<stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to searcj
 * @c: char to be located
 *
 * Return: c or NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
