#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: the array
 * @n: the number of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		*(a + i/ 2) = tmp;
	}
	for (i = n; i < 0; i--)
		*(a + i);
}
