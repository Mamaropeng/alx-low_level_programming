#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - To print name using a pointer to function
 * @name: string to be added
 * @f: pointer to the function
 * Return: Empty
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
