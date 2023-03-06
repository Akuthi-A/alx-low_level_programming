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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
