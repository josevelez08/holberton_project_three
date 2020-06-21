#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 *
 * @n: something
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
