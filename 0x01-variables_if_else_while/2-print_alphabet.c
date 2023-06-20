#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print lowercase alphabets'
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

