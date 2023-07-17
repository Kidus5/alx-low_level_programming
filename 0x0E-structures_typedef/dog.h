#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * struct dog - is a structure
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
	{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - is a new name for type sturct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* DOG_H */