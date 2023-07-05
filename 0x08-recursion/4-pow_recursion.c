#include "main.h"

/**
 * _pow_recursion - calculate the power of an integer
 * @x: the integer
 * @y: the power
 *
 * Return: the value of x reaised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
