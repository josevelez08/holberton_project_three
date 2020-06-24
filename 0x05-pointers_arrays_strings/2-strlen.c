#include "holberton.h"
#include <string.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: Betty
 * Return : value is tamaño
 */

int _strlen(char *s)
{
	int i = 0, tamaño = 0;

	while (i != -1)
	{
		if (*(s + i) != '\0')
			tamaño = tamaño + 1;
		else
		{
			i = -1;
			break;
		}
		i = i + 1;
	}
	return (tamaño);
}
