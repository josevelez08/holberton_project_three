#include "holberton.h"

/**
 * times_table - the function.
 *
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; i++)

		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (j / 10 != 0)
			{
				if (j != 0)
				{
					_putchar (',');
					_putchar (' ');
				}
				_putchar (result / 10 + '0');
				_putchar (result % 10 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
				_putchar (result  + '0');
			}
		}
	_putchar('\n');
	}

