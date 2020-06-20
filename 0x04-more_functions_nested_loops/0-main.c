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

    c = 65;
    printf("%c: %d\n", c, _isupper(c));
    c = 97;
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
