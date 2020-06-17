#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int m;
int h;

h = 0;
while ( h < 24)
	{
		m = 0;
		while ( m < 60)
		{
		printf ("%d:%d\n",h,m);
		m++;
		}
		h++;
	}
}
