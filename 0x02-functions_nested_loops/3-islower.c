#include "main.h"

/**
 * _islower - Checks for a lowercase charecter
 * @c: The charecter to be checked
 * Return: 1 for lowercase charerecter or 0 anything else
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

