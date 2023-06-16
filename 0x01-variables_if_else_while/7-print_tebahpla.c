#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	char ahpla = 'z';

	while (ahpla >= 'a')
	{
		putchar(ahpla);
		ahpla--;
	}
	putchar('\n');
	return (0);
}
