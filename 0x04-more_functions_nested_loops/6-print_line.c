#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @a: The number of line to draw
 * Return: Nothing
 *
 */
void print_line(int a)
{
	int b;

	if (a <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (b = 0; b < a; b++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}

