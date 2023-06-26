#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @x: The string to be treated
 * Return: void
 *
 */
void puts2(char *x)
{
	int a;
	int b = 0;

	while (x[b] != '\0')
	{
	b++;
	}
	for (a = 0; a < b; a += 2)
	{
	_putchar(x[a]);
	}
	_putchar('\n');
}
