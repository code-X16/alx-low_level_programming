#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	printf("%s\n", argv[i]);
	return (0);
}
