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

	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of a int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longinttype));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlonginttype));
	printf("Size of a float: %zu byte(s)\n", sizeof(floattype));
	return (0);
}
