#include <stdio.h>

/**
 * main - Prints the numbers from 1-100 but multiples of three
 * Fizz is printed in place of the no, Buzz in place of mutiples,
 * of 5 and FizBuzz for both five and three.
 *
 * Return: Always 0;
 */
int main(void)
{
	int n;

	for (n = 1;  <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizBuzz");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf
		}
		else
		{
			printf("%d", n);
		}
	}
}
