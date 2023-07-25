#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: the number of command line argument
 * @argv: the array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul = 1;

	for (argc = 0; argv[argc]; argc++)
	{
		if (argc < 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", mul);
			return (0);
		}
	}
}
