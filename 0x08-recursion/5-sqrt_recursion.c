#include "main.h"
/**
* helperFunction - checks if sqrt of a number exists
* @num: number
* @pSqrt: possible sqrt of a number
*
* Return: sqrt of number ot -1 for error
*/
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
		return (-1);
		else
		return (helperFunction (num, pSqrt + 1));
	}
}
/**
* _sqrt_recursion - returns the natural square root of a given number
* @n: number to find the square root of
*
* Return: square root of n
* -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else
	return (helperFunction(n,0));
}