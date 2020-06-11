#include <stdlib.h>
#include <time.h>

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
		printf(n, " is positive");
	}
	if else(n == 0)
	{
		printf(n, " is zero");
	}
	else
	{
		printf(n, " is negative");
	}
	return (0);
}
