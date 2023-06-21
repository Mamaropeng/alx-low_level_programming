#include "main.h"

/**
 * _isalpha - checks whether a character is an alphabet or not
 * @c: The charecter to be checked
 * Return: 1 for alphabetic charecter or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

