#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *i;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	i = malloc(sizeof(int) * size);

	if (i == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		i[j] = min++;

	return (i);
}
