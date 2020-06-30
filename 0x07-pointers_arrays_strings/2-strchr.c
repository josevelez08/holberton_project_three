#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */


char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if ( s[i] != c)
		{
			s[i] = '\0';
		}
		else
		{
			i++;
		}
	}
	return (s);
}