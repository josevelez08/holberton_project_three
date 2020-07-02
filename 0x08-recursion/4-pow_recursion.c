#include "holberton.h"
/**
 * _pow_recursion -  checker the raised
 * @x: base
 * @y: exponente
 * Reutrn: result
 */

int _pow_recursion(int x, int y)
{
	int elev;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		elev = (x * (_pow_recursion(x, y - 1)));

	return (elev);
	}
}
