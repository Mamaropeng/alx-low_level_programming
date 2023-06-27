#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @x: Array of integer
 * @y: Number of element of the array to be printed
 * Return: void
 *
 */
void print_array(int *x, int y)
{
	int a;

	for (a = 0; a < y; a++)
	{
	printf("%d", x[a]);
	if (a != (y - 1))
	{
	printf(",");
	}
	}
	printf('\n');
}
