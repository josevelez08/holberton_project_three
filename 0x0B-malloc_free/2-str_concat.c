#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int cont1, cont2;
	char *p;
	
	if ( s1 == NULL)
	{
		return (NULL);
	}
		if ( s2 == NULL)
	{
		return (NULL);
	}
	for ( cont1 = 0;  s1[cont1] != '\0';)
	{
	cont1++;
	}
	for ( cont2 = 0; s2[cont2] != '\0';)
	{
	cont2++;
	}

	p = malloc(cont1 + cont2 + 1);

	if (p == NULL)
	{
		return (NULL);
	} 
	for ( cont1 = 0;  s1[cont1] != '\0'; cont1++)
	{
	p[cont1] = s1[cont1];
	}
	for ( cont2 = 0;  s2[cont2] != '\0';cont2++)
	{
	p[cont1 + cont2] = s2[cont2];
	}
	p[cont1 + cont2] = '\0';
	return (p);
}