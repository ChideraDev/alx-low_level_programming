#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if c is a number between 0 to 9
 * @c: The number
 * Return: 1 if c is a number between 0 to 9, 0 if not a digit
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
