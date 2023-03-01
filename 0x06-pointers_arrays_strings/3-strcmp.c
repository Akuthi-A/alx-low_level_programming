#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: returns 0 if strings are the same
 *	returns +ve number if s1>s2
 *	returns -ve number if s1<s2
 */

int *_strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;
	result = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	return (result);
}
