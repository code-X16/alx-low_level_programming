#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: int
 * @b: int
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: int
 * @b: int
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: int
 * @b: int
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: int
 * @b: int
 *
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of the division of a by b
 * @a: int
 * @b: int
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
