#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: variable
 *
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *l;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j)
			;
	}
	if (j > n)
		j = n;
	l = malloc(sizeof(char) * (i + j + 1));
	if (l == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		l[k] = s1[k];
	for (k = 0; k < j; k++)
		l[k + i] = s2[k];
	l[i + j] = '\0';

	return (l);
}
