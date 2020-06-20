#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 48;
    printf("%c: %d\n", c, _isdigit(48));
    c = 97;
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
