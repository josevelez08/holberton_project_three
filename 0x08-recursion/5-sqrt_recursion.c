#include "holberton.h"
/**
* find_sqrt_number - raiz cuadrada
* @n: base
* @i: raiz
*/

int find_sqrt_number(int n, int i)
{
	if ( n < 0 )
	{
		return (-1);
	}
	else if ( i * i > n )
	{
		return (-1);  
	}
	else if ( i * i == n)
	{
		return (i);
	}
	return (find_sqrt_number(n, i + 1));
}
/**
* find_sqrt_number - raiz cuadrada
* @n: base
* @i: raiz
*/
int _sqrt_recursion(int n)
{
	return ( find_sqrt_number(n, 0) );
}
