#ifndef _DOG_
#define _DOG_
/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;
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
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
