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
		printf("%d", n);
		_putchar(44);
		_putchar(32);
	}	
	if (n < 98)
	{
		n++;
		printf("%d", n);
		_putchar(44);
		_putchar(32);
	}
	else
	{
		n--;
		printf("%d", n);
		_putchar(44);
		_putchar(32);
	}
	printf("%d",98);
}
