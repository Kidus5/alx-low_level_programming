#include "main.h"

/**
 * _strdup - copy of the string
 * @str: the string
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	ptr = malloc(sizeof(char *) + 1);
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}
