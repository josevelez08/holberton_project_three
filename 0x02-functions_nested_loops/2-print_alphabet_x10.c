#include "holberton.h"
#include <stdio.h>
/**
  * main - check the code for Holberton School students.
  *
  * Return: void
  */ 
void print_alphabet_x10(void)
{
char i = 0;
int j = 0;
for (j = 1; j <= 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
