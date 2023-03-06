#include "main.h"

/**
 * _strspn - returns length of initial string
 * @s: string to be searched
 * @accept: string
 *
 * Return: length of initial string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z'))
			{
				return count;
			}
			if (s[i] == accept[j])
			{
				count = count + 1;
			}
		
		}
	}
	return (count);
}
