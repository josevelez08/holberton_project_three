#include "holberton.h"
#define NULL ((void *)0)

/**
 * *_strchr - locates a character in a string
 * @s: array s
 * @c: number of search
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int cont;
	for (cont = 0;  s[cont] != '\0'; cont++);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else  
		{
			++s;
			if ( *s == cont)
			{
				return(NULL);
			}
		}
	}
	return(0);
}
