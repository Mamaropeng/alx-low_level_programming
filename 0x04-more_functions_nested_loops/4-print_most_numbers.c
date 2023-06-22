#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9
 * Description: Prints the numbers except 2 and 4
 * Return: The number from 0 up to 9
 *
 */
void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
	if (n == 2 || n == 4)
	{
		continue;
	}
	else
	{
	_putchar(n + '0');
	}
	}
	_putchar('\n');
}

