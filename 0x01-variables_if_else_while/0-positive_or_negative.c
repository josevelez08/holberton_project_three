#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - positive and negative
 *
 * Return: 0 always runs
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf(n + " is positive\n");
	}
	else
	{
		if (n == 0)
		{
			printf(n + " is zero\n");
		} else
		{
			printf(" is negative\n");
		}
	}
	return (0);
}
