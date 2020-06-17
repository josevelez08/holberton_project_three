#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet(void)

{
  char i = 0;
  int j = 0;

	for ( j = 1; j <= 10; j++)
    {
     for (i >= 'a'; i <= 'z'; i++)
      {
       _putchar(i);
      }
   _putchar('\n');
    return (0);	
	 }
}
