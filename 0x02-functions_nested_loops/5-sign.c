#include "holberton.h"

/**
 * print_sign - mayor o menor
 * @n: character to be checker
 * Return: 1 if greather than zero or 0 is false
 */

int print_sign(int n)

{	
	if (n > 0)
		{
		_putchar ('+');
		return (1);
		}
	else if (n == 0)
		{ 
		_putchar ('0');
		return (0);
		}
	else (n < 0)
		{
			_putchar ("-");
			return (-1);
		}
}
