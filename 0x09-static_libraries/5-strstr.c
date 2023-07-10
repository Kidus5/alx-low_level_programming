#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substing
 * @s: a poitner to the string
 * @accept: the substing
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, len2, i;

	i = 0;

	for (len = 0; s[len]; len++)
	{
		for (len2 = 0; accept[len2]; len2++)
		{
			if (accept[len2] == s[len])
				i++;
		}
	}
	i = i - 2;
	return (i);
}
