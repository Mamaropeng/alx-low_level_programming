#include "main.h"

/**
 * main - Entry point
 * Description:  'print_alphabet in lower case'
 * Return: void
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

