#include "main.h"

/**
<<<<<<< HEAD
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		count++;
	}

	int usable_length = count -1;
	int i;

	for (i = usable_length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
=======
* print_rev - prints a string, in reverse, followed by a new line.
* @s: the string to print
*
* Return: void
*/

void print_rev(char *s)
{
int count = 0;
int j;    
int i;

for (j = 0; s[j] != '\0'; j++)                                                           
{
count++;
}
    
for (i = count -1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
>>>>>>> c9a1fd434e1edd221d3eee554663e39a9b5839a7
}
