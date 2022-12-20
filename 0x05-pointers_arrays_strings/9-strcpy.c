#include "main.h"

/**
* _strcpy - Copy a string
* @dest: Destination value
* @src: Source value
* Return: the pointer to the destination
*/
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int x = 0;

	while (*(src + a) != '\0')
		a++;

	for (; x < a; x++)
	{
		dest[x] = src[x];
	}
	dest[a] = '\0';
	return (dest);
}
