#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of string 2
 *
 * @Return: pointer to new string, else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
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

	if (n >= len2)
		n = len2;


	str = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);


	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i += 1;
	}

	str[i] = '\0';

	return (str);
}
