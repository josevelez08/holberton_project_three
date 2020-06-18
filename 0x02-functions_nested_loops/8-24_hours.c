#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)

{
	int m = 0;
	int h = 0;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar("0" + h);
			_putchar("0" + m);
			_putchar("\n");
		}

	}

}
