#include <stdio.h>

/**
* main - alfabeto mayusculas y minisculas
*
* Return: 0
*/
int main(void)
{
int i;

	for ( i= 48; i < 58; i++)
		{
			putchar(i);
			if (i != 57)
			{
			putchar(44);
			}
		}
		putchar('\n');
		return (0);
}
