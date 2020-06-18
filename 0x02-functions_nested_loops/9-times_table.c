#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++ )
		{
			int resultado;
			resultado = i * j;
			if ( j != 9)
			{	
				if ( resultado < 9 )
				{
					printf(" %d, "  , resultado);
				} else
				{
					printf("%d, "  , resultado);
				}
			} else
			{
				if ( resultado < 9 )
				{
					printf(" %d, "  , resultado);
				} else
				{
					printf("%d, "  , resultado);
				}
			}
		}
	}
}
