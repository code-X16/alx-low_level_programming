#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @c: character to locate from input array
 * @s: pointer to our string array input
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return ('\0');

}
