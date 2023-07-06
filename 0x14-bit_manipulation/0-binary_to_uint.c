#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: binary to be converted
 *
 * Return: converted number, else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, number;

	number = 0;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			number = (number << 1) | 1;
		}
		else if (b[i] == '0')
		{
			number = number << 1;
		}
		else
		{
			return (0);
		}
	}

	return (number);
}
