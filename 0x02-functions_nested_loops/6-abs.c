#include "holberton.h"
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _abs(int o)
{
	if ( o > 0)
	{
		_putchar (o);
		_putchar ("\n");
	}
	else if ( o == 0 )
	{
		_putchar (o);
		_putchar ("\n");
	}
	else if ( o < 0)
	{
		printf (o);
		_putchar ("\n");
	}
}