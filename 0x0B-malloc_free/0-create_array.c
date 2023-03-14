#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array, and initializes to char
 * @size: size of array
 * @c: character the arr will initialized with
 *
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}

