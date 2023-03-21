#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: the character to be checked
 *
 * Return: 1 if character is lowercase or uppercase
 * 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' || 'A' && c <= 'z' || 'Z')
		return (1);
	else
		return (0);
}
