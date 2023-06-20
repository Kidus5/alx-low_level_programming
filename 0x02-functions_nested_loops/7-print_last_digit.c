#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int n;

	if (i >= 0)
	{
		_putchar((i % 10) + '0');
		return (i % 10);
	}
	else
	{
		n = -1 * i;
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
