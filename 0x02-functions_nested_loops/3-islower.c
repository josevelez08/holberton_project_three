#include "holberton.h"

/**
	* _islower - check if the character is lowercase .
	*@c character to be checked
	* Return: Always 0.
	*/

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		{
		return (1);
		}
	else
	{
		return (0);
	}
}
