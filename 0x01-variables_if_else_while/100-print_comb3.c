#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int start = 1;
	int end = 85;

	for (int a = start; a <= end; a++)
	{
		int tens = a / 10;
		int ones = a % 10;

		putchar('0' + tens);
		putchar('0' + ones);

		if (a < end)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
