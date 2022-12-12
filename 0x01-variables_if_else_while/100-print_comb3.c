#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	for (a = 1; a <= 85; a++)
	{
		int tens = a / 10;
		int ones = a % 10;

		putchar('0' + tens);
		putchar('0' + ones);

		if (a < 85)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
