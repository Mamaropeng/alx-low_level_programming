#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Description: 'prints the largest prime factor of the number 612852475143'
 * Return: 0 (success)
 *
 */
int main(void)
{
	long x;
	int f;
	long n = 612852475143;
	double square = sqrt(n);

	for (x = 1; x <= square; x++)
	{
	if (n % x == 0)
	{
	f = n / x;
	}
	}
	printf("ld\n");
	return (0);
}

