#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a poitner to a pointer to a stirng
 * @to: a poitner to a stirng
 *
 * Return: Nothing.
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
