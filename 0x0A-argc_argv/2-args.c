#include  <stdio.h>
/**
* main - contar los argumentos
* @argc: numero de argumentos
* @argv: cadena
* Return: 0 Always
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
