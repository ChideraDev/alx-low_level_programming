#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	/* function to print alphabet from a-z */
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
