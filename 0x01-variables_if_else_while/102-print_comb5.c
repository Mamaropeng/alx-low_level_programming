#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: 'prints all possible combinations of two two-digit numbers'
 * Return: always 0
 *
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
	for (y = x + 1; y <= 99; y++)
	{
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	putchar(' ');
	putchar((y / 10) + '0');
	putchar((y % 10) + '0');
	if (x == 89 && y == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
