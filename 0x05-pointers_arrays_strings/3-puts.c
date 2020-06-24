#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @j: betty
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
