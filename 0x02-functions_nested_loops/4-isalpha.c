#include "main.h"

/**
 * _isalpha - determines whether a character is uppercase or not
 * @c: the character to be checked
 *
 * Return: returns 1 if c is uppercase, else returns 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
