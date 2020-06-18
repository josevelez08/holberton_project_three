#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			printf("0" "%d"  , h);
			printf("0" "%d" , m);
			putchar("\n");
		}
		 putchar("\n");
	}
}
