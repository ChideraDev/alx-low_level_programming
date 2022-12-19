#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first variable to be swapped
 * @b: second cariable to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
