#include "main.h"
#include <stdlib.h>
int _str_length(char *str);

/**
 * _str_length - returns length of string
 * @str: string to be counted
 *
 * Return: length of string
 */

int _str_length(char *str)
{
	int i, count;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
/**
 * string_nconcat - concates 2 str in new location
 * @s1: input string
 * @s2: input string
 * @n: bytes to be copied in s2
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2, total;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size1 = _str_length(s1);
	size2 = _str_length(s2) + 1;

	if (n >= size2)
	{
		n = size2;
	}

	total = size1 + n;

	str = malloc(sizeof(char) * total);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; ; i++)
	{
		if (s1[i] == '\0')
		{
			for (j = 0; j < n; j++)
			{
				*(str + i) = *(s2 + j);
				i++;
			}
			i = i + 1;
			*(str + i) = '\0';

			return (str);
		}

		*(str + i) = *(s1 + i);
	}
}
