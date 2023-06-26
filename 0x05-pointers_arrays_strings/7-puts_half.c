#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int n, len;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		for (n = len / 2; str[n]; n++)
			_putchar(str[n]);
	}
	else
	{
		for (n = ((len -1) / 2); str[n]; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}

/**
 * _strlen - finds the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;
	len++;
	return (len);
}
