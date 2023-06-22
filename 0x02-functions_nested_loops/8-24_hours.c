#include "main.h"

/**
 * jack_bauer - print every munites of the day
 * Return: ...
 *
 */
void jack_bauer(void)
{
	int n, m, p, q;

	for (n = 0; n <= 2; n++)
	{
	for (m = 0; m <= 9; m++)
	{
		if ((n <= 1 && m <= 9) || (n <= 2 && m <= 3))
		{
			for (p = 0; p <= 5; p++)
			{
			for (q = 0; q <= 9; q++)
			{
				_putchar(n + '0');
				_putchar(m + '0');
				_putchar(58);
				_putchar(p + '0');
				_putchar(q + '0');
				_putchar('\n');
			}
			}
		}
	}
	}
}
