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
	void *ptr;
	unsigned int i, j;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (j = 0; j < nmemb; j++)
	{
		for (i = 0; i < size; i++)
		{
			*ptr(i + j) = 0;
		}
	}
	return (ptr);
}
