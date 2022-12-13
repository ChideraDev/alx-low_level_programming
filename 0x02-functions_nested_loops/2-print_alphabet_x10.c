#include "main.h"

/**
 * print_alphabet - This function prints the English alphabets in 10 lines
 *
 * Return: Empty/Nothing
 */

void print_alphabet_x10(void)
{
	char chr;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
	}
}
