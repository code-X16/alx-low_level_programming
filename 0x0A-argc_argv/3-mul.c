#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
