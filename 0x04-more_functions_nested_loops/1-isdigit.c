#include "main.h"

/**
 *  _isdigit - checks if the charecter is digit
 *  @a: The number to be checked
 *  Return: 1 if the charecter is a digit or 0 for anything else
 *
 */
int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}

