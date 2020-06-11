#include <stdio.h>
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
		printf("%s\n", " is positive");
	}
	if else(n == 0)
	{
		printf("%s\n", " is zero");
	}
	else
	{
		printf("%s\n", " is negative");
	}
	return (0);
}
