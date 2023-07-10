!<arch>
0-isupper.c/    0           0     0     644     227       `
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character
 *
 * Return: 1 if c is uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

0-memset.c/     0           0     0     644     306       `
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer
 * @b: constant byte
 * @n: bytes of memory
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
0-strcat.c/     0           0     0     644     360       `
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
100-atoi.c/     0           0     0     644     39        `
#include "main.h"

int _atoi(char *s);

1-isdigit.c/    0           0     0     644     209       `
#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the digit
 *
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

1-memcpy.c/     0           0     0     644     344       `
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to be copied in to
 * @src: memory area to be copied
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
1-strncat.c/    0           0     0     644     403       `
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: a string
 * @src: a string
 *@n: number of bytes
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

2-strchr.c/     0           0     0     644     346       `
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a pointer to a string
 * @c: the character to be located
 *
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i, len, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c && s[i] != '\0')
		{
		}
	}
	return (s);
}

2-strlen.c/     0           0     0     644     217       `
#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

2-strncpy.c/    0           0     0     644     377       `
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

3-islower.c/    0           0     0     644     226       `
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character
 *
 * Return: 1 if c is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
		return (1);
	else
		return (0);
}
3-puts.c/       0           0     0     644     218       `
#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
3-strcmp.c/     0           0     0     644     407       `
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

3-strspn.c/     0           0     0     644     472       `
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
4-isalpha.c/    0           0     0     644     275       `
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character
 *
 * Return: 1 if c is a letter, lower or uppercase
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

4-strpbrk.c/    0           0     0     644     0         `
5-strstr.c/     0           0     0     644     472       `
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
6-abs.c/        0           0     0     644     214       `
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: the integer.
 *
 * Return: The absolute value of an integer
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (-i);
}
9-strcpy.c/     0           0     0     644     341       `
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

main.c/         0           0     0     644     144       `
#include "main.h"

int main(void)
{
	_puts("\"At the end of the day, my goal was to be the best hacker \"\n\t- Kevin Mitnick");
	return (0);
}

_putchar.c/     0           0     0     644     246       `
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
