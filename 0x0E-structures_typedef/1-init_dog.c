#include "dog.h"
/*
* init_dog:  initianilize a variable
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
