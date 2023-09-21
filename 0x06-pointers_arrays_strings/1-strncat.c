#include "main.h"

/**
 * _strncat -  appends the src string to the dest string
 * @dest: string to append to
 * @src: string to be appeneded
 * @n: most amount of bytes used from src
 *
 * Return: pointer wiht the appended string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
