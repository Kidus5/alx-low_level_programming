#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
