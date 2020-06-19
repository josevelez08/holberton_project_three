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
  for (j = 1; j <= 10; j++)
  {
    for (i = 'a'; i <= 'z'; i++)
    {
      _putchar(i);
      _putchar('\n');
    }
    _putchar('\n');
  }
}
