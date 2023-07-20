#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum oof all its parameters
 * @n: The number of parameters to the function
 * @...: A variable number of parameters to calculate the sum of
 *
 * Return: 0, if (n == 0)
 * Or else the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int y, sum =  0;

	for (y = 0; y < n; y++)
		sum += va_arg(x, int);
	va_end(x);
	return (sum);
}
