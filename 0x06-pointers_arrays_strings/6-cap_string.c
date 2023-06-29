#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 * @str: the string
 *
 * Return: A pointer to the new string
 */
char *cap_string(char *str)
{
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len, i;


	for (len = 0; str[len]; len++)
	{
		if (str[len] 
