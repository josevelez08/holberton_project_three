#include <stdio.h>
#include "lists.h"
/**
* add_node - imprime el numero de elementos de una lista
* @head: puntero
* @str: cadena
* Return: numero de nodos
*/
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *str2 = (list_t *)malloc(sizeof(list_t));

	if (*head == NULL)
	{
		str2->next = NULL;
	}
	else
	{
		str2->next = *head;
	}
	*head = str2;
	str2->str = strdup(str);
	while (*str != '\0')
	{
		str++;
		count++;
	}
	str2->len = count;
	return (str2);
}
