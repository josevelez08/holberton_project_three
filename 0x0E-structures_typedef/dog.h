#ifndef HOLBERTON
#define HOLBERTON
/*
* struct dog: perros
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
