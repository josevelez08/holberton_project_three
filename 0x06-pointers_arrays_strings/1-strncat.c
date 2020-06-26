#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
	int contd;
	int conts;

	for (contd = 0; dest[contd] != '\0'; contd++);
	{
		dest[contd] = 'W';
	}
	for (conts = 0; src[conts] < n && src[conts] != '\0';) 
	{
		dest[contd] = src[conts];
		contd++;
		conts++;
	}
	return (dest);
}

