#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: The character to be checked
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
