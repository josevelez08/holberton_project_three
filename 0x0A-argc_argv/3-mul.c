#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - contar los argumentos
* @argc: numero de argumentos
* @argv: cadena
* Return: 0 Always
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
