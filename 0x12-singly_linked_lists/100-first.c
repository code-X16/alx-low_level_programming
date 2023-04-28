#include <stdio.h>

/**
 * hare - function that runs before main
 *
 * Return: Nothing
 */

void __attribute__ ((constructor)) hare()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
