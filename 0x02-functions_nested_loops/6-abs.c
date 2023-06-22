#include "main.h"

/**
 * _abs - computes the absolute value of the integer.
 * @x: The number to be computed.
 * Return: Absolute value of number or zero
 */
int _abs(int x)
{
	if (x < 0)
	{
	int abs_val;

	abs_val = x * -1;
	return (abs_val);
	}
	return (x);
}
