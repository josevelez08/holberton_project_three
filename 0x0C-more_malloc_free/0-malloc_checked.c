#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - revisa malloc
* @b: valor
* Return: un puntero
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if  (p == NULL)
	{
		exit(98);
	}

	return (p);
}
