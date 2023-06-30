#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase letters
 * @str: The string to be changed.
 * Return: A point where the string changed.
 *
 */
char *string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= z)
		str[index] -= 32;
		index++;
	}
	return (str);
}
