#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
