#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
		int c;

		for (c = 48 ; c < 58; c++)
		{
			if (c != 50 && c != 52)
			{
				_putchar (c);
			}
		}
		_putchar('\n');
}
