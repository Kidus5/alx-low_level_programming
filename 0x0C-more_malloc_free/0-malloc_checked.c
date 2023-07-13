#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: the value to be allocated
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
