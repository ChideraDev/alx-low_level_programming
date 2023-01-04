#include "main.h"

/**
* factorial - returns the factorial of a number
* @n: number to find the factorial of
*
* Return: factorial of a number
* _1 if n < 0
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return (1);
	return (n * factorial(n - 1)); 
}
