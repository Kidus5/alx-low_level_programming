#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: the widht of the array
 * @height: the height of the array
 *
 * Return: NULL on failure or 
 * if width/height = 0
 * a pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	ptr = malloc(sizeof(width) * sizeof(height));
	if (ptr == NULL)
		return (NULL);
	if (width == 0 || height == 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			;
		}
	}
	return (ptr);
}
