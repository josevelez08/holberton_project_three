
#include "holberton.h"

/**
 * rev_string - chek the code the Holberton students
 * @s: input string reverse
 */

void rev_string(char *s)
{
	int j = 0,  i = 0;

	while (s[j] != '\0')
	{
		j = j + 1;
	}

	while (i <= j - 1)
	{
		char text1 = s[i];
		char text2 = s[j - 1];

		s[i] = text2;
		s[j - 1] = text1;
		i = i + 1;
		j = j - 1;
	}
}
