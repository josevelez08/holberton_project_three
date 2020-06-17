#include "holberton.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - 10 prints the alphabet
 *
 * Return: Void
 */


void print_alphabet_x10(void)

{
	char c;
	int i;

	i = 0;
	while ( i < 10)
	{
		c = 'a';
		while (c < 'z')
		{
				_putchar(c);
				c = c + 1;
		}
		putchar('\n');
		i++;
	}
	 