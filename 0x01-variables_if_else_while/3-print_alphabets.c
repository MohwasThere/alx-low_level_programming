#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		printf("%c", c);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		printf("%c", c);
	}
	printf("\n");
}
