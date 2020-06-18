#include "holberton.h"
#include <stdlib.h>
/**
 * _abs - absolute value 
 * @o: number absolute
 * Return: Always 0.
 */

int _abs(int o)
{
	if (o < 0)
	{
		o = -o;
	}
	return (o);
}
