#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: no of bites
 *
 * Return: a pointer to a newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j;

	str = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
		n = _strlen(s2);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
