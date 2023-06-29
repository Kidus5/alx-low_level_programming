#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase.
 * @str: the string
 *
 * Return: a poitner to the new string
 */
char *string_toupper(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
	{
		if (str[len] > 'a' && str[len] < 'z')
			str[len] -= ' ';
		else
			str[len];
	}
	return (str);
}
