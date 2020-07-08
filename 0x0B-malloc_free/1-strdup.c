#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
/**
* _strdup - print a string
* @str: tamaño de la matriz
* Return: puntero a la matriz o NULL si falla
*/
char *_strdup(char *str)
{
	char *p;
	unsigned int t, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (t = 0; str[t] != '\0';)
		t++;

	p = malloc(sizeof(char) * t + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0';)
	{
		*(p + i) = *(str + i);
		i++;
	}
	return (p);
}
