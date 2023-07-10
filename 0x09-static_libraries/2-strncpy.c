#include "main.h"

/**
 * _strncpy: copies a string
 * @dest: a string
 * @src: a string
 * @n: the byte
 *
 * Return: a pointer to the string dest
 */
char *_strncpy(char *dest, char *src, int n)
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
