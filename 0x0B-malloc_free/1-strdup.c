#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	c = malloc((len + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		c[i] = str[i];
		i++;
	}

	return (c);
}
