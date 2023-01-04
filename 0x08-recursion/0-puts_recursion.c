#include "main.h"
/**
* _put_recursion - Prints a string followed by a newline.
* @s: The string to be printed
*/
void _puts_recursion(char *s){
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
	
}
