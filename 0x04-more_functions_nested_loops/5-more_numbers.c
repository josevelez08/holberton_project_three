#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 *
 */

void more_numbers(void)
{
	int f;

	int n;

	int mod;

	for (f = 0; f < 10; f++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
			{
				_putchar ((n + 48));
			}
			else
			{
				_putchar(49);
				mod = n % 10;
				_putchar ((mod + 48));
			}
		}
		_putchar (10);
	}
}
