#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @n: number of elements of the array
 * @a: The array of integers to be reversed
 */

void reverse_array(int *a, int n)
{
	int i, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		i = a[s];
		a[s] = a[e];
		a[e] = i;
		s++;
		e++;
	}
}
