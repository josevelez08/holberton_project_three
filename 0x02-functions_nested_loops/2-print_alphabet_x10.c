#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet - 10 prints the alphabet
 *
 * Return: Void
 */

void print_alphabet(void)

{
	int i;
	int j ;

	for ( j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
