#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
