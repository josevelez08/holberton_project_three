#include "holberton.h"
#include <stdlib.h>
/**
* create_array - crea una serie de caracteres
* @size: tamaño de la matriz
* @c: matriz
* Return: puntero a la matriz o NULL si falla
*/

char *create_array(unsigned int size, char c)
{
	char *p;

	p = malloc(sizeof(char) * size);

	if  (size == 0)
	{
		return (NULL);
	}
	else
	{
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
		unsigned int i;
			for (i = 0; i < size; i++)
			{
				p[i] = c;
			}
		}
	}
	return (p);
}
