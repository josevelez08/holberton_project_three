#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct dog - Short description
 * @name: Name dog
 * @age: age dog
 * @owner: owner dog
 *
 * Description: date dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
