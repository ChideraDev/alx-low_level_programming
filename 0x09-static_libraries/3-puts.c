#include "main.h"
/**
* _puts - function to print a string and then a new line at the end.
* @str: pointer to a string variable
* Return: Nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	 _putchar('\n');
}
