#include "main.h"

/**
 * print_numbers - This function prints numbers between 0 - 9.
 *
 * Return: Empty/Nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
