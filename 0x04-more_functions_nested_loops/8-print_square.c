#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 *
 * @n: something
 */

void print_square(int size)
{
	int i;

	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	} else
	{
		_putchar(10);
	}
}
