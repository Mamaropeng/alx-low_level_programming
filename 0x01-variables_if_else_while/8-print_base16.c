#include <stdio.h>

/**
 * main - enrty point
 * Description: 'prints all the numbers of base 16 in lowercase'
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a = 48;
	int b = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

