#include <stdio.h>
#include "lists.h"
/**
* list_len - imprime el numero de elementos de una lista
* @h: puntero
* Return: numero de nodos
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
