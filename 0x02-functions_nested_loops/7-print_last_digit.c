#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *@c: the number
* Return: Always 0.
*/
int print_last_digit(int c)

{
	int i;

	i = c % 10;
	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + 48);
	return (i);
}
