#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
