#include "holberton.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: bueno
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0;  i < n; i++)
	{
		*(src + i) = *(dest + i);
	}
	return (dest);
}
