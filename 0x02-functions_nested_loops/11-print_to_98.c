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
		printf("%d, ", n);

		if (n < 98)
		{
			n++;
		}
		else 
		{  
			n--;
		}
	
	}
	
	printf("%d\n",98);

}
