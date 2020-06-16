#include "holberton.h"
/**
 * main - print message code c
 *
 * Return: 0 always runs
 */

int main(void)

{
	char palabra[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(palabra[i]);
	}
	_putchar('\n');
	return (0);
}

