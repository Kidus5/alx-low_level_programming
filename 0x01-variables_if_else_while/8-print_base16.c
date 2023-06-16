#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: always 0.
 */
int main(void)
{
	int i = 48;
	char alpha = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
