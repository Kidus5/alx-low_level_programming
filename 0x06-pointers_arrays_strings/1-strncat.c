#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: a string
 * @src: a string
 * n: number of bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len2;

	for (len = 0; dest[len]; len++)
		;
	for (len2 = 0; src[len2] && len2 < n; len2++)
	{
		dest[len] = src[len2];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
