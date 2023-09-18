#include "main.h"

/**
 * swap_int - swap two int with each other
 *@a: pointer to first value
 *@b: pointer to second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
