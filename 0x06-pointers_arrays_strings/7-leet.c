#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *leet(char *s)
{
	int len1, len2;
	char *b = "aAeEoOtTlL";
	char *a = "44330077";

	for (len1 = 0; s[len1] != '\0'; len1++)
	{
		for (len2 = 0; len2 < 10;)
		{
			if ( s[len1] == a[len2])
			{
				s[len1] = b[len2];
			}
		}
	}
	return (s);
}
