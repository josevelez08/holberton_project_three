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

	for (contd = 0; dest[contd] != '\0';) // conte el destino = Hello
	{
		contd++;
	} // Hello '\0'_ _ _ _ _ _ _ _ _ _ _ 
		for (conts = 0; src[conts] != '\0';) // conte la fuente = world !
	{
		dest[contd] = src[conts]; // Hello W_ _ _ _ _ _
		contd++;
		conts++;
	} // Hello World!_ _ _ _ _ _ _ 
	dest[contd] = '\0'; // Hello World! '\0' _ _ _ _ _ _ _ 
	return (dest);
}
