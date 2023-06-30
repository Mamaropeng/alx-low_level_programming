#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase letters
 * @n: The string to be changed.
 * Return: A point where the string changed.
 *
 */
char *string_toupper(char *n)
{
	int x;

	x = 0;
	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
		n[x] = n[x] - 32;
		x++;
	}
	return (n);
}
