#include "main.h"

/**
 * rev_string - reverse string stored in a pointer
 * @s: the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;
	int j;
	int i;
	char temp = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		count++;
	}

	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = temp;
	}
}
