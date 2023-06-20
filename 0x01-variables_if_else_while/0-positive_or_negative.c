#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: check negative or positive
 * Return: Always 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
}
	var_if
	(n ^ > 0) :
{
		printf("if n is greater than 0 %d is positive,\n")
	else if
		(n == 0) :
{
		printf("if n is equal to 0 then %d is zero,\n");
}
	else
	(n < 0) :
{
		printf("if n is less than 0 then %d is negative,\n");
	return (0);
}

