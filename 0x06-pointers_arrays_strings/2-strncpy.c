#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

	
char *_strncpy(char *dest, char *src, int n)
{
	int cont;
	for (cont = 0; cont < n && src[cont] != '\0'; cont++)
	for (; dest[cont] != '\0'; cont++)
	{
		dest[cont] = src[cont];
	}
	return (dest);
}
