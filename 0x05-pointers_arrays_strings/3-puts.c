#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
* Return: Always 0.
*/
void _puts(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
	{
		_putchar(*(str + j));
			j = j + 1;
	}
	_putchar('\n');
}
