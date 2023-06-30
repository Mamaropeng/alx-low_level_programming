#include "main.h"

/**
 * _strcmp - Compares pointers to two strings
 * @s1: A pointer to the first string to be campared.
 * @s2: A pointer to the seconf string to be compared.
 * Return: If str1 < str2, the - difference of the 1st unmatched charecters
 * If str1 == str2, 0
 * If str1 > str2, the positive difference of the first unmatched charecters
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
