#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: int factorial
 */

int factorial(int n)
{
	int mult = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if  ( n > 0 )
	{
		mult = n *(factorial( n - 1));
		return (mult);
	}
	else if (n == 0)
	{
		return (1);
	}
}
