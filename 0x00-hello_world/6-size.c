#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int inttype;
	char chartype;
	long int longinttype;
	long long int longlonginttype;
	float floattype;

	printf("Size of char: %zu bytes(s)\n", sizeof(chartype));
	printf("Size of int: %zu bytes(s)\n", sizeof(inttype));
	printf("Size of long int: %zu bytes(s)\n", sizeof(longinttype));
	printf("Size of long long int: %zu bytes(s)\n", sizeof(longlonginttype));
	printf("Size of float: %zu bytes(s)\n", sizeof(floattype));
	return (0);
}
