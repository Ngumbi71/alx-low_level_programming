#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: name to initialize
 * @age: age to intialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
