#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: input pointer to pointer
 * @to: input pointer char
 * Return: Nothing
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
