#include <stdio.h>

/**
 * main - entry point
 * Description: 'finds and prints the sum of the even-valued terms'
 * less than 4,000,000,
 * Return: nothing
 *
 */
int main(void)
{
	int p = 0;
	long q = 1, x = 2, sum = x;

	while (x + q < 4000000)
	{
		x += q;
		if (x % 2 == 0)
		sum += x;
		q = x - q;
		p++;
	}
	printf("%ld\n", sum);
	return (0);
}

