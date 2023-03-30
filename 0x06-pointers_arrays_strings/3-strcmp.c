#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
