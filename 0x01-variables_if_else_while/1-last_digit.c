#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	num = n % 10;

	if (num > 5)
		printf("and is greater than 5\n");
	else if (num == 0)
		printf("and is 0\n");
	else if ((num < 6) && (num < 0))
		printf("and is less than 6 and not equal to 0\n");

	return (0);
}