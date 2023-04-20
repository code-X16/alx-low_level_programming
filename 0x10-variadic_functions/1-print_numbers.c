#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, int));
		if (j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
