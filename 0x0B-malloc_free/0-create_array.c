#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * create_array - create an array of chars, initializes it with a specific char
 * @size: size of the array
 * @c: the char that we will use to intialize
 *
 * Return: pointer to the array (success) , NULL (error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}

