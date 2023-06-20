#include <stdio.h>

/**
 * main -entry point
 * Description: 'prints all single digit numbers of base 10 starting from 0'
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

