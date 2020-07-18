#include "function_pointers.h"
/**
 * int_index - check the code for Holberton School students.
 * @array: arreglo
 * @size: tamaño del arreglo
 * @cmp: puntero
 * Return: Always 0.
 */
	int int_index(int *array, int size, int (*cmp)(int))
	{
		int i;
		int j = 0;
		int index;

		for (i = 0; i < size; i++)
		{
		index = ((cmp)(array[i]));
		if (index == 1)
		{
			j++;
		}
		}
		if (j == 0)
		{
			return (-1);
		}
		else
		{
		return (j);
		}
	}
