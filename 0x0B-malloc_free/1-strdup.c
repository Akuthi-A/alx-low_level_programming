#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies string to new memory addr
 * @str: string to be copied
 *
 * Return: str, or if fails NULL
 */

char *_strdup(char *str)
{
	int i, size, counter;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	size = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}
	for (counter = 0; size >= counter; counter++)
	{
		*(s + counter) = *(str + counter);
	}

	return (s);
}
