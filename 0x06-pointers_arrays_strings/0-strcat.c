#include "main.h"

/**
* _strcat - Append a string to the end of another string
* @dest: The string appended to.
* @src: The string to append
*
* Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	dest++;

	while (*src != '\0')
	{
	*dest = *src;
	src++;
	dest++;
	}
	*dest = '\0';
	return (dest);
}
