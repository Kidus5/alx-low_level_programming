#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL on failure
 * a pointer to the newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;

	ptr = malloc(sizeof(s1) + sizeof(s2) + 6);
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		ptr = "";
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
