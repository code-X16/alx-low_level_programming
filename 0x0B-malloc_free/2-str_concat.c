#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	int i, j;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	c = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));

	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		c[i] = s2[j];
		i++;
	}

	c[i] = '\0';

	return (c);
}
