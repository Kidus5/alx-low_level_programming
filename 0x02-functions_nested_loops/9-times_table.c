#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: nothing
 */
void times_table(void)
{
	int i = 0;
	int result;

	while (i < 10)
	{
		int mul = 0;

		while (mul < 10)
		{
			result = i * mul;
			
			if (mul != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			mul++;
		}
		_putchar('\n');
		i++;
	}
}
