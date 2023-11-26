#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer that has a string
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *str2;
	int len = 0, i;

	if (str == NULL)
		return (NULL);
	
	while (str[len] != '\0')
		len++;
	str2 = malloc((len + 1) * sizeof(char));

	if (str2  == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
