#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: buffer
 * @src: the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, len2;

	for (len = 0; src[len]; len++)
		;
	for (len2 = 0; len2 < len; len2++)
	{
		dest[len2] = src[len2];
	}
	dest[len2] = '\0';

	return (dest);
}
