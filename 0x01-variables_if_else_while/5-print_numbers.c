#include <stdio.h>

/**
 * main - Entry point
 * Function to return single digits between 0-10 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar('0' + a);

	putchar('\n');

	return (0);
}
