#include "main.h"

/**
 * _isdigit - checks if c is a number
 * @c: the number to check
 * Return: 1 if c is a number,0 if not
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
