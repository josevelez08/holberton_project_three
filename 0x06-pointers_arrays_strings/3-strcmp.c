#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
    int conts2;
    int c;

    for (conts2 = 0; s2[conts2] != '\0'; conts2++)
    {
    if ( (s1[conts2]) - (s2[conts2]) != 0)
    {
        c = (s1[conts2]) - (s2[conts2]);
        break;
    }
    else 
    {
      c  = 0; 
    }
    }
  return (c);
}
