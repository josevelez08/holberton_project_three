
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - contar los argumentos
* @argc: numero de argumentos
* @argv: cadena
* Return: 0 Always
*/

int main(int argc, char *argv[])
{
	int suma = 0;
	int val;
	int i;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			val = atoi(argv[i]);

			if (val == 0)
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
			{
				suma = suma + val;
			}
		}
	}
	printf("%d\n", suma);
	return (0);
}
