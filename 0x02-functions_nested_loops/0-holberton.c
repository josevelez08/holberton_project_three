#include "holberton.h"
/**
 * main - print message code c
 *
 * Return: 0 always runs
 */

int main()
{
	char palabra[9] = "Holberton";
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		 _putchar(palabra[i]);
	}
	putchar('\n');
	return (0);
}
