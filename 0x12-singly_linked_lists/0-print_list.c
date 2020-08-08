#include <stdio.h>
#include "lists.h"
/**
* print_list - imprime los elmentos de una lista enlazada
* @h: puntero
* Return: numero de elementos
*/
size_t print_list(const list_t *h)
{
int count = 0;
while (h)
	{
	if (h->str == NULL)
	{
		printf("nil");

	}
	else
	{
	printf("%s", h->str);
	}
	printf(" [%d]\n", h->len);
	h = h->next;
	count++;
	}
	return (count);
}
