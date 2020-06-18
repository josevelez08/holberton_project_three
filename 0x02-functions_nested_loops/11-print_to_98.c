#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	n = -10;

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
			putchar(44);
			putchar(32);
		}
		printf("%d",98);
}
