#include <stdio.h>
#include <stdlib.h>

/**
*main -  print the numbers
* Return: 0 always
*/

int main(void)
{
int i;
int j;

for (i = 48; i < 58; i++)
{
	for (j = 48; j < 58; j++)
	{
		if (i > 48 && j == 48)
		{ j++; }
		if (i > 49 && j == 49)
		{ j++; }
		if (i > 50 && j == 50)
		{ j++; }
		if (i > 51 && j == 51)
		{ j++; }
		if (i > 52 && j == 52)
		{ j++; }
		if (i > 53 && j == 53)
		{ j++; }
		if (i > 54 && j == 54)
		{ j++; }
		if (i > 55 && j == 55)
		{ j++; }
		if (i > 56 && j == 56)
		{ j++; }
		if (i > 57 && j == 57)
		{ j++; }
		if (i > 57 && j == 57)
		{ j++; }
		if (i == j)
		if (j > 57 && i > 57)
		{
			break;
		}
		putchar(i);
		putchar(j);
		putchar(44);
		putchar(32);
}
}
return(0);
}
