#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int main(void)
{
	int a;
	int b;
	int c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number (a, b, c);

	printf("%d is the largest number\n", largest );
	return (0);
}
