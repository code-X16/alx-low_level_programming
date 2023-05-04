#include "main.h"

/**
 * _pow - calculates base and power
 * @b: base of the exponet
 * @p: power of the exponet
 *
 * Return: value of base and power
 */

unsigned long int _pow(unsigned int b, unsigned int p)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= p; i++)
		n *= b;
	return (n);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int d, r;
	char fl;

	fl = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (d != 0)
	{
		r = n & d;
		if (r == d)
		{
			fl = 1;
			_putchar('1');
		}
		else if (fl == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
