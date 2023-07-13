#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: the size to allocate
 * Return: Empty
 *
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(89);
	return (x);
}
