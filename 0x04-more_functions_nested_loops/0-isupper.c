#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
