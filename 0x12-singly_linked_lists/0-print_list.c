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
		printf("[0] (nil)\n");
		printf("[%d] ", h->len);
	}
	else
	{
	printf("%s\n", h->str);
	}
	h = h->next;
	count++;
	}
	return (count);
}
