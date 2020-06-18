#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
 
int print_last_digit(int c)

{
	int i;
	i = c % 10;
	_putchar(i);
	_putchar('\n');
}
