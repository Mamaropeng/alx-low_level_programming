#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of the number
 * @n: number to calculate the square root
 *
 * Return: The natural number of square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate the natural square root
 * @n: number to calculate the square number
 * @i: iterate number
 *
 * Return: The natural square root
 *
 */
int _sqrt(int n, int i)
{
	int sqrt = 1 * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
