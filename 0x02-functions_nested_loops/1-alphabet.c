#include "main.h"

/**
 * print_alphabet - This function prints the English alphabets
 *
 * Return: Empty/Nothing
 */

void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
