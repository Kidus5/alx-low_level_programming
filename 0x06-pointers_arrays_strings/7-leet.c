#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 *
 * Return: a pointer to string
 */
char *leet(char *str)
{
	int len, i;
	char alpha[5] = {'a', 'e', 'o', 't', 'l'};
	char Alpha[5] = {'A', 'E', 'O', 'T', 'L'};
	int num[5] = {'4', '3', '0', '7', '1'};


	for (len = 0; str[len]; len++)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[len] == alpha[i] || str[len] == Alpha[i])
				str[len] = num[i];
		}
	}
	return (str);
}
