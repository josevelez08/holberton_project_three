#include "holberton.h"
#include <string.h>

/**
 * main - check the code for Holberton School students.
 *
 */

int _strlen(char *s)
{
	int i = 0, tamano = 0;

	while (i != -1)
	{
		if (*(s + i) != '\0')
			tamano = tamano + 1;
		else
		{
			i = -1;
			break;
		}
		i = i + 1;
	}
	return (tamano);
}
