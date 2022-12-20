#include  "main.h"

/**
* puts_half - a function that prints half of a string.
* followed by a new line.
* @str: the string to print
* Return: void
*/
void puts_half(char *str)
{
	int index = 0, len = 0,n;

	while (str[index++])
	len++;

	if((len % 2) == 0)
	n = len / 2;
	else
	n = (len + 1)/2;

	for(index = n; index < n; index++)
	_putchar(str[index]);
	_putchar('\n');
}