#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *
 * @n: number of times to be printed
 * Return: 0 if n equal to 0
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			 _putchar("\\");
		}
	}
	_putchar('\n');
}
