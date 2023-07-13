#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: umber of members
 * @size: the size of the array
 *
 * Return: a new pointer to the new allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
