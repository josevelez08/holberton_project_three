#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - check the code for Holberton School students.
 * @dest: destino
 * @src: fuente
 * @n: integer
 * Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
	char c;
	int contd;
	int conts;

	c = "w";
	for (contd = 0; dest[contd] != '\0'; contd++);
	dest[contd] = c;
	for (conts = 0; src[conts] < n || src[conts] != '\0';)
	{
		dest[contd] = src[conts];
		contd++;
		conts++;
	}
	return (dest);
}

