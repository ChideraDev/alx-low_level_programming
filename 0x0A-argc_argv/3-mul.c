#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Adds positive numbers
* @argc: number of command line arguments
* @argv: array that contains the program command line arguments
* Return: 0 - success
*/
int main(int argc, char *argv[])
{
	int a,b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}
	printf("Error\n");
	return(1);
}
