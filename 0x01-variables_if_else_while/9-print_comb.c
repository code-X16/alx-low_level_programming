#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	if (i != 'i')
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
