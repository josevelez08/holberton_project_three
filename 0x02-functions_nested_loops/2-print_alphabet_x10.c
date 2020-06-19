#include <stdio.h>
#include "holberton.h"

  /**
* main - check the code for Holberton School students.
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 97 ; i < 123 ; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
	}
}
