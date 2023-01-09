#include "main.h"	
#include <stdlib.h>	
/**
* create_array - create array of size size and assign char c
* @size: size of array		
* @c: char to assign
* Description: creat array of size size and assign char c
* Return: pointer to array, NULL if fail		
*
*/		
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = (char *)malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (NULL);
	}
	else 
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}
	}
	return (buffer);
}
