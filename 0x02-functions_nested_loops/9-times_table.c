#include "holberton.h"
#include <stdio.h>

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int resultado;

			resultado = i * j;
			if (j != 9)
			{
				if (j == 0)
				{
					_putchar(resultado/10);
					_putchar(resultado % 10);
					_putchar("\n");
				} else if (resultado < 10)
				{
					_putchar(resultado/10);
					_putchar(resultado % 10);
					_putchar("\n");
				} else
				{
					_putchar(resultado/10);
					_putchar(resultado % 10);
					_putchar("\n");
				}
			} else
			{
				if (resultado < 10)
				{
					_putchar(resultado/10);
					_putchar(resultado % 10);
					_putchar("\n");
				} else
				{
					_putchar(resultado/10);
					_putchar(resultado % 10);
					_putchar("\n");
				}
			}
		}
	}
}
