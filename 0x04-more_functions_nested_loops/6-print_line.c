#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times to be printed
 * Return: 0 if n equal to 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
