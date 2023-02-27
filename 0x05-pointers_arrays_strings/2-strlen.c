#include "main.h"

/**
 * _strlen - determines the length of a string
 * @s: string to be checked
 *
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
