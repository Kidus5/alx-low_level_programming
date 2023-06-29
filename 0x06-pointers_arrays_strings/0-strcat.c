#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len, len2;

	for (len = 0; dest[len]; len++)
		;
	for (len2 = 0; src[len2]; len2++)
	{
		dest[len] = src[len2];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
