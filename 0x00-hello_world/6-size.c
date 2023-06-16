#include <stdio.h>

/**
 * main -  prints the size of various types
 *
 * Return: Always 0 (successul)
 *
 */
int main(void)
{
	char 1;
	int 4;
	long int 4;
	long long int 8;
	float 4;

	printf("Size of a char: %d byte(s)\n", sizeof(1));
	printf("Size of a int: %d byte(s)\n", sizeof(4));
	printf("Size of an long int: %d byte(s)\n", sizeof(4));
	printf("Size of a long long int: %d byte(s)\n", sizeof(8));
	printf("Size of a float: %d byte(s)\n", sizeof(4));
	return (0);
}

