#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i + j + k != 168)
					{
						putchar(',');
						putchar(' ');
					}
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
