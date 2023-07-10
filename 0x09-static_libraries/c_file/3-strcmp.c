#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: -15 if s2 is less 15 if s2 is greater
 * 0 if s1 is equal to s2
 */
int _strcmp(char *s1, char *s2)
{
	int len, len2;

	for (len = 0; s1[len]; len++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	if (len < len2)
		return (-15);
	else if (len == len2)
		return (0);
	else
		return (15);
}
