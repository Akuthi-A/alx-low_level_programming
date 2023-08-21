#include "main.h"

/**
 * _isalpha - determines whether a character is a letter or not
 * @c: the character to be checked
 *
 * Return: returns 1 if c is letter, else returns 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
