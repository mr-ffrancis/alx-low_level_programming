#ifndef _DOG_
#define _DOG_

/**
 * struct dog - stucture that describes the dog.
 * @name: and the name of dog
 * @age: age of dog
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
