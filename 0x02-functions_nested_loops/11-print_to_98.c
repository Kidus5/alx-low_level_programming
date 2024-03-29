#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers form n to 98
 * @n: the number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			printf("%d, ", n);
			n--;
		}
	}
}
