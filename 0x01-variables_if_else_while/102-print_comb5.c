#include <stdio.h>

/**
 * main - prints all possible combinations of two two digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k, l;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				l = 48;
				while (l < 58)
				{
				
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i > j && (i + j != 113))
						{
							putchar(',');
							putchar(' ');
						}
		
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
