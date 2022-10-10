#include "dog.h"
/**
 * init_dog - Intializes dog
 * @d: stuct dog initializer
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
