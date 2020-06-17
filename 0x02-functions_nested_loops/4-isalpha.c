#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check characters
 * @c: character to be checker
 * Return: 1 is true or 0 is false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||  (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
			return (0);
	}
}
