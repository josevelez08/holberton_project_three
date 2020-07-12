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

	for (i = 0; s1[i] != '\0'; i++)
	;
	p = (malloc((sizeof(char) * (n + i + 1))));
	if (s1 == NULL)
	 {s1 = "" };
	if (s2 == NULL)
	s2 = "";
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0';)
	{
		p[i] = s1[i];
		i++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	;
	if (n >= j)
	{
	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i + j] = s2[j];
	}
	}
	else
	{
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	}
	p[i + j] = '\0';
	return (p);
}
