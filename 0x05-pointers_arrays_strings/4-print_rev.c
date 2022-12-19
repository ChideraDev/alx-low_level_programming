#include "main.h"

/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: the string to print
*
* Return: void
*/

void print_rev(char *s)
{
	int count = 0;
	int j;
	int i;

	for (j = 0; s[j] != '\0'; j++)
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
