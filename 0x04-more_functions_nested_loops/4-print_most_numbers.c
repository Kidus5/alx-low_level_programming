#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		if (num != 50 && num != 52)
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
