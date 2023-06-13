#include "main.h"

/**
 * _strdup - duplicate input string
 * @str: input string
 *
 * Return: pointer to duplicated string, else NULL
 */

char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len += 1;

	duplicate = (char *)malloc(sizeof(char) * (len + 1));

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
