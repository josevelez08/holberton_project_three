#include "holberton.h"

/**
* is_prime_number - numeros primos
* @n: num checker
* Return: 0 always
*/


int  find_prime_number(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	else if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}

	return ( find_prime_number(n, i + 1));
}

/**
* is_prime_number - check
* @n: checker
* Return: 0 always
*/

int is_prime_number(int n)
{
	return (find_prime_number(n, 2));
}
