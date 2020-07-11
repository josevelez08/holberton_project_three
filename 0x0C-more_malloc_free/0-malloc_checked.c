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
	int *p;

	p = malloc(sizeof(int *));

	*p = b;

	return (p);
}
