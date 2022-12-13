#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char *str = "_putchar";

	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar("\n");
	return (0);
}
