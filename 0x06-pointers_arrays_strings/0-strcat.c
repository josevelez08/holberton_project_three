#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 * @dest: destino
 * @src: fuente
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int contd;
	int conts;

	for (contd = 0; dest[contd] != '\0';)
	{
		contd++;
	}
		for (conts = 0; src[conts] != '\0';)
		{
		dest[contd] = src[conts];
		contd++;
		conts++;
		}
	dest[contd] = '\0';
	return (dest);
}
