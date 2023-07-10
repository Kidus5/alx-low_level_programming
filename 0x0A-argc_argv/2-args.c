#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: the number of commands
 * @argv: the array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	for (argc = 0; argv[argc]; argc++)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
