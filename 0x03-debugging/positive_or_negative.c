#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints random number and finds out if it
 * is positive or not
 *
 * Return: Always 0.
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
