#include<stdio.h>
/**
 *  main - prints all arguments it receives
 *  @argc:number of arguments inputed
 *  @argv: array of arguments
 *
 *  Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
	return(0);
}
