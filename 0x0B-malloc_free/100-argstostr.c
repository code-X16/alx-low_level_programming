#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *s, *a;
	int i, j, k, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		a = av[i];
		j = 0;

		while (a[j++])
			l++;
		l++;
	}

	s = (char *)malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < l; i++)
	{
		a = av[i];
		k = 0;

		while (a[k])
		{
			s[j] = a[k];
			k++;
			j++;
		}
		s[j++] = '\n';
	}
	s[j] = '\0';

	return (s);
}
