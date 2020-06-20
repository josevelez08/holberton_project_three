#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int f;
	int n;

	for (f = 0; f < 10; f++)
	{
	 for ( n = 48; n < 63; n++);
	 {
		 if ( n < 58)
		 {
			 _putchar (n);
		 }
		 else
		 {
			 for ( n = 48; n < 53; n++)
			 {
				 	_putchar ('1' + n);
			 }
		 }
		 _putchar (10);
	 }
	}
}