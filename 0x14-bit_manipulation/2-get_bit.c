#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: value
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: value of the bit at index @index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	res = n & d;
	if (res == d)
		return (1);

	return (0);
}
