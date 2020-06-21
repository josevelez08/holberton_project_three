#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int f;
	int n;

	for (f = 0; f < 10; f++)
	{
		for ( n = 0; n <= 14; n++);
		{
			if ( n < 10)
			{
				_putchar (n + 48);
			}
			else
			{
				_putchar(49);
				_putchar (n % 10);
			}
		 _putchar (10);
	 }
	}
}