#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - check the code for Holberton School students.
 * @d: pointer
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
if (d->name == NULL)
{
	printf("Name: (nill)\n");
}
else
{
	printf("Name %s\n", d->name);
}

printf("Age: %f\n", d->age);

	if (d->owner == NULL)
{
	printf("Owner: (nill)");
}
else
{
	printf("Owner: %s\n", d->owner);
}
}
