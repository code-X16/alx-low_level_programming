#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: buffer where we will copy to
 * @src: bytes from memory area
 * @n: n bytes of @src
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
