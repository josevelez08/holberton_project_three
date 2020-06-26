#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * i = tamaño
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
