#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		res <<= 1;
		if (b[i] == '1')
			res += 1;
		i++;
	}
	return (res);
}
