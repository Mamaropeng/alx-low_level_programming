#include "main.h"

/**
 * print_last_digit - print the last digit of number
 * @x: The number to be treated
 * Return: The value of the last digit of number
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
	y = y * -1;
	}
	_putchar(y + '0');
	return (y);
}
