#include "dog.h"

/**
 * @d: a structure for a dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (d == NULL)
		printf("\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
