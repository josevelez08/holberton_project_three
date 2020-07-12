#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatena dos strings
* @s1: primero
* @s2: segundo
* @n: numero de bytes
* Return: un puntero
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *p;

if (s1 == NULL && s2 == NULL)
{
	return (NULL);
}

p = (malloc((sizeof(char *) * n)));

for (i = 0; s1[i] != '\0';)
{
	p[i] = s1[i];
	i++;
}
	for (j = 0; j < n; j++)
{
	p[i + j] = s2[j];
}
return (p);
}
