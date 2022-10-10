#ifndef _DOG_
#define _DOG_

/**
 * dog_h - Typedef for dog
 * struct dog - stucture that describes the dog.
 * @name: and the name of dog
 * @age: age of dog
 * @owner: name of owner
 */
typedef struct dog dog_h;
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
