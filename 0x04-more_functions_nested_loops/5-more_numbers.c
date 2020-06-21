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
			mod = n % 10;
			if (n > 9)
			{
				_putchar (49);
			}
			_putchar ((mod + 48));
		}
		_putchar (10);
	}
}
