#include "main.h"

/**
 * _strchr - searches for when a char first occurs
 * @s: string to be searched
 * @c: character being searched
 *
 * Return: return pointer to first occurence else Null
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
