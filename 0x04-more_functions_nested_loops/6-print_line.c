#include "main.h"

/**
 * print_line - draws a straight line
 * @n: numbers of lines
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int num = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (num = 0; num < n; num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
