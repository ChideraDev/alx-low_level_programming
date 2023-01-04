#include "main.h"
/**
 * wildcmp - function to compares two strings which
 * could be identical when comparing wildcards.
 * @str_one: the plain string to compare
 * @str_two: the string with wild character
 * Return: 1 on success and -1 on error.
 */
int wildcmp(char *str_one, char *str_two)
{
	if (*str_one == '\0' && *str_two == '\0')
	return (1);
	
	if (*str_one == *str_two)
	return (wildcmp(str_one + 1, str_two + 1));
	
	if (str_two == '')
	{
		if (str_two == '' && *(str_two + 1) != '\0' && *str_one == '\0')
		return (0);
		if (wildcmp(str_one, str_two + 1) || wildcmp(str_one + 1, str_two))
		return (1);
	}
	return (0);
}