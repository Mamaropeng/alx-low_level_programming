#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @x: The string to get the length
 * Return: The length of @x
 *
 */
int _strlen(char *x)
{
	int length = 0;

	while (*x++)
	length++;
	return (length);
}
