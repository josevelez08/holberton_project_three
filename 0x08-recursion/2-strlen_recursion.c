#include "holberton.h"

/**
 * _strlen_recursion - returns the leght of a string
 * @s: the string
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	int tamano = 0;

	if (*s != '\0')
	{
		tamano = 1 + _strlen_recursion(s + 1);
	}
	return (tamano);
}
