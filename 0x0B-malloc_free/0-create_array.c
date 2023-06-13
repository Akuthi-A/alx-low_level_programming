#include "main.h"

/**
 * create_array - creates an array of char and
 * dynamically allocates memory for the array
 * @size: size of array
 * @c: character to initialize array
 *
 * Return: pointer to array, else return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
