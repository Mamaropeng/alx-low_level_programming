#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @x: The string to printed
 * Return: void
 *
 */
void print_rev(char *x)
{
	int y = 0;

	while (x[y] != '\0')
	{
	y++;
	}
	for (y -= 1; y >= 0; y--)
	{
	_putchar(x[y]);
	}
	_putchar('\n');
}
