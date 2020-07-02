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
	int *c;

	while (s[i] != '\0')
	{
		if ( s[i] != c)
		{
			continue;
		}
		else
		{
			s++;
		}
	}
<<<<<<< HEAD
	return (s);
}
=======
	
}
>>>>>>> 2f60f2bb251bc4018feed5c3e1d3a1af2378dd79
