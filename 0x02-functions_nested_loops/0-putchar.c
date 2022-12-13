#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar("\n");
	return (0);
}
