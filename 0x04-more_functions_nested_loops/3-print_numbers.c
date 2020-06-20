#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
 int c = 48 ;

	for ( c >= 48 ; c < 58; c++ )
	{
	_putchar (c);
	}
	_putchar('\n');
}
