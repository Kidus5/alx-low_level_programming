#include <stdio.h>

/**
 * main - prints all possible combinations of single_digit nubmers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
