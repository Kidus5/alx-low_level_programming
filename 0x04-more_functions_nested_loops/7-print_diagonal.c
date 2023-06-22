#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of diagonals
 *
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		_putchar('\n');
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
