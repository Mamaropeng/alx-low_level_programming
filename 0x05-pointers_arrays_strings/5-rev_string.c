#include "main.h"

/**
 * rev_string -  reverses a string
 * @x: The string to be reversed
 * Return: void
 *
 */
void rev_string(char *x)
{
	int len = 0, index = 0;
	char tmp;

	while (x[index++])
	len++;
	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = x[index];
	x[index] = x[len - index - 1];
	x[len - index - 1] = tmp;
	}
}

