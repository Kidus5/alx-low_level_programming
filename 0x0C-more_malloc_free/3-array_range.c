#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min of number
 * @max: max of number
 *
 * Retrun: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	ptr = malloc(sizeof(int) * min * max);
	if (ptr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (i = 0; i <= min; i++)
	{
		for (j = 0; j <= max; j++)
		{
			ptr;
		}
	}
	return (ptr);
}
