#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			n++;
		}
		else 
		{  
			n--;
		}
			printf("%d", n);
			_putchar(44);
			_putchar(32);
		}
		printf("%d",98);
}
