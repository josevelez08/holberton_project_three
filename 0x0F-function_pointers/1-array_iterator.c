#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - check if a number is equal to 98
 * @array: the integer to check
 * @size: size
 * @action: action
 * Return: 0 if false, something else otherwise.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size;)
	{
	(action)(array[i]);
	i++;
	}
}
