#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable
 * @d: pointer d
 * @name: Name dog
 * @age: age dog
 * @owner: owner dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
