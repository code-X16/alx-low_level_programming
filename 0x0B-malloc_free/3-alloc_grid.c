#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: NULL or failure
 */

int **alloc_grid(int width, int height)
{
	int **g, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			while (i >= 0)
			{
				free(g[i]);
				i--;
			}
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}
	return (g);
}
