#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
			putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
