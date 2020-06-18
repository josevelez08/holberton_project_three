#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar("n");
		_putchar(44);
		_putchar(32);
	}	
	if (n < 98)
	{
		n++;
	}
	else
	{
		n--;
	}
	_putchar(98);
}
