#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 16; a++)
		putchar(a < 10 ? '0' + a : a - 10 + 'a');

	putchar('\n');

	return (0);
}
