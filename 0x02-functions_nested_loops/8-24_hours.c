#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	while (i < 23)
	{
		j = 0;
		while( j < 4)
		{
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
