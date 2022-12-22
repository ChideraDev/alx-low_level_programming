#include "main.h"

/**
* reverse_array - Reverses the contents of an array of integers
* @a: The array to reverse
* @n: The number of elements in the array to be reversed
*/

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
