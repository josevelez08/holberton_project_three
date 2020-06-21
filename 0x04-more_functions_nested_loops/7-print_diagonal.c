#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 *
 * @n: something
 */

void print_diagonal(int n)
{
	int i;

	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for(j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
	_putchar(10);
}
