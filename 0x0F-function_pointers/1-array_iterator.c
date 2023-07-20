#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - To prints each array elem on a newl
 * @array: The array
 * @size: How many elem to print
 * @action: Pointer to print in regular
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}

