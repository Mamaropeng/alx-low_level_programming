#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: The string to print
 * Return: void
 *
 */
void puts_half(char *str)
{
	int x = 0;
	int y;

	while (str[x] != '\0')
	{
	x++;
	}
	if (x % 2 == 1)
	{
	y = (x - 1) / 2;
	y += 1;
	}
	else
	{
	y = x / 2;
	}
	for (; y < x; y++)
	{
	_putchar(str[y]);
	}
	_putchar('\n');
}
