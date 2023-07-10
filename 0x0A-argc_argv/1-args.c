#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argv: the array
 * @argc: the numbmer of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	argc = 0;

	for (argc = 0; argv[argc]; argc++)
		;
	printf("%d\n", argc - 1);
	return (0);
}
