#include "main.h"

/**
 * _isupper - checks if the letter is in uppercase
 * @a: The number to be checked
 * Return: 1 for uppercase letter or 0 for otherwise
 *
 */
int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	return (0);
}

