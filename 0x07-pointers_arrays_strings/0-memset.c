#include "main.h"

/**
 * _memset - to fill memory with a constant byte
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
