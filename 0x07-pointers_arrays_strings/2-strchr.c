#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: array s
 * @c: number of search
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s = s + 1;
	}
<<<<<<< HEAD
<<<<<<< HEAD
	return (s);
}
=======
	
}
>>>>>>> 2f60f2bb251bc4018feed5c3e1d3a1af2378dd79
=======

	if (*s == c)
	{
		return (s);
	}

	return ('\0');
}
>>>>>>> e5c06a4f4d023d86cc209f8f2b4dac2e5dce9ed0
