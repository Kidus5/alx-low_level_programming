#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	if (i >= 0)
	{
		_putchar(i % 10 + '0');
		return (i % 10);
	}
	else
	{
		i = -1 * i;
		_putchar(i % 10 + '0');
		return (i % 10);
	}
}
