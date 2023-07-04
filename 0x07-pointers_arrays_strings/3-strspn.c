#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 *
 * Return: 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				x++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
