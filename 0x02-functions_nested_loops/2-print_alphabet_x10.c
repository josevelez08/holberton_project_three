#include <stdio.h>
#include "holberton.h"

  /**
* print_alphabet_x10 - print alphabet 10 times.
*
*
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
		_putchar(10);
	}
}
