#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @x: The first integer to be swapped
 * @y: The second integer to be swapped
 *
 * Return: None
 *
 */
void swap_int(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
