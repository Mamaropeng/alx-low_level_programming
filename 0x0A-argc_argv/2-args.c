#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
