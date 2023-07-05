#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return(0);
	len = 0;
	len = _strlen_recursion(s + 1) + 1;
	return (len);
}
