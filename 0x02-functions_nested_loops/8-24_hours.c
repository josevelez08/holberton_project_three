#include "holberton.h"
#include <stdio.h>

/**
 * jack_bauer - hours
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{

	int h;
	int m;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if ( m < 60)
			{
				_putchar( h / 10 + '0');
				_putchar( h % 10 + '0');
				_putchar(':');
				_putchar( m / 10 + '0');
				_putchar( m % 10 + '0');
				_putchar('\n');
			}
		}
	}
}
