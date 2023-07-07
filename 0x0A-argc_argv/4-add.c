#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the sum of positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int n, sum = 0;
	char *m;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			m = argv[i];
			for (n = 0; n < strlen(m); n++)
			{
				if (m[n] < 48 || m[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(m);
			m++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
