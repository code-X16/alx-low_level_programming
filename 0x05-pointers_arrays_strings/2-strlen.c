#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string to check
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
