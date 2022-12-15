#include "main.h"

/**
 * _isdigit - checks if c is a number between 0 to 9
 *
 * @c: the number
 *
 * Return: 1 if c is a number between 0 to 9,0 if not
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
