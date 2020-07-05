#include  <stdio.h>
/**
* main - contar los argumentos
* @argc: numero de argumentos
* @argv: no gunciona
* Return: 0 Always
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
