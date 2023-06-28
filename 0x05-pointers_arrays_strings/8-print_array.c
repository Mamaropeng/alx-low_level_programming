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
	int z;

	for (z = 0; z < y; z++)
	{
		printf("%d", x[   z]);
		if (z != (y - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
