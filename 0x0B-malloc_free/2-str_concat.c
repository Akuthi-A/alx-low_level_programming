#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: concatenated string, else NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i, j;

	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1 += 1;

	while (s2[len2] != '\0')
		len2 += 1;

	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		str[len1] = s2[j];
		len1 += 1;
	}
	str[len1] = '\0';

	return (str);

}
