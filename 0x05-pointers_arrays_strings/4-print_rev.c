#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	char *str = s;
	int len, len2;
	len = _strlen(str);
	for (len2 = len; len2 < 0; len2--)
	{
		prinf("%c",
		_putchar(s[len2]);
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

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);

