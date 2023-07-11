#include "main.h"

/**
 * main - check the code for Alx School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup("First, solve the problem. Then, write the code.");
	if (s == NULL)
	{
		printf("failed to allocated memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
