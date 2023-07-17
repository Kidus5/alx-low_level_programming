#include "dog.h"

/**
 * new_dog - a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: NULL if fails
 * The address to the new dog on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *n;
	char *o;
	int i, j;

	n = "";
	o = "";

	for (i = 0; name[i]; i++)
		n[i] = name[i];
	n[i] = '\0';
	for (j = 0; owner[j]; j++)
		o[j] = owner[j];
	o[j] = '\0';
	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);
	ptr->name = n;
	ptr->age = age;
	ptr->owner = o;

	return (ptr);
}
