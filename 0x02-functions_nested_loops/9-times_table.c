#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (((i * j) % 9) != 0 || i == 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i * j < 10)
			{
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
