#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source of string
 * Return: A pointer to the resulting string dest.
 *
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, a;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (a = 0; src[a] != 0; a++)
	{
		dest_len = src[a];
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
