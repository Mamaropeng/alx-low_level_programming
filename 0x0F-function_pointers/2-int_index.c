#include "function_pointers.h"

/**
 * int_index - To return index place if comparison is true,
 * else -1
 * @array: the array
 * @size: The size of elements in array
 * @cmp: Pointer to function of one of the 3 in main
 * Return: 0 (success)
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
