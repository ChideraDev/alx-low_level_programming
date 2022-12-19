#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		count++;
	}

	int usable_length = count - 1;
	int i;

	for (i = usable_length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
