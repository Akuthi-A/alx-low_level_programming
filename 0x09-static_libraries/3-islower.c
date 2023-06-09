#include "main.h"

/**
 * _islower - determines whether a character is lowercase or not
 * @c: the character to be checked
 *
 * Return: returns 1 if c is lowercase, else returns 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
