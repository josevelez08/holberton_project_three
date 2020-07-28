#include <stdio.h>
#include "lists.h"
/**
*  print_listint - prints the elements of one list
* @h: the pointer
* Return: the numbers od elemnts
*/
size_t print_listint(const listint_t *h)
{
		printf("%i\n", h->n);
		printf("%d\n", h->next->n);
		return (2);
}
