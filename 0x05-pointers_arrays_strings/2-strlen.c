#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to return the length
 *
 * Return: void
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		 s++;
	}
	return (count);
}
