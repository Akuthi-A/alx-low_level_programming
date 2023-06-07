#include "main.h"

/**
 * _strlen_recursion - determines length of a string using recursion
 * @s: input string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
