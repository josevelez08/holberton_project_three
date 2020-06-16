#include "holberton.h"
#include <ctype.h>
/**
 * print_alphabet - prints the alphabet
 *
 * Return: Void
 */

int _islower(int c)

{
	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
