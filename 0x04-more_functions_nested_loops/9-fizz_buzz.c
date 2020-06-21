#include "holberton.h"

/**
 * fizz - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void fizz(void)
{
	int i;

	int mod3;

	int mod5;

	for (i = 1; i <= 100; i++)
	{
		mod3 = i % 3;
		mod5 = i % 5;
		if (mod3 == 0)
		{
			printf("Fizz");
		}
		if (mod5 == 0)
		{
			printf("Buzz");
		}
		if (mod3 != 0 && mod5 != 0)
		{
			printf("%d", i);
		}
			if (i != 100)
		{
			printf(" ");
		}
	}
}
