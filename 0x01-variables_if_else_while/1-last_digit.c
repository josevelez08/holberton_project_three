#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digit
 *
 * Return: 0 always runs
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		int module;
		module = n % 10;

		if (module > 5)
		{
		printf("Last digit of %i  is %i and is greater than 5\n", n, module);
		}
		else
		{
				if (module == 0)
				{
						printf("Last digit of %i  is %i and is 0\n", n, module);
				}
				else
				{
						printf("Last digit of %i  is %i and is less than 6 and not 0\n", n, module);
				}
		}
		return (0);
}
