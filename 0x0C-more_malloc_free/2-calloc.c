#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for arr to zero
 * @nmemb: number of elements
 * @size: number of bytes
 *
 * Return: pointer to allocated memory
 * if fails return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	ptr = malloc(total);

	if (ptr != NULL)
	{
		char *char_ptr = (char *)ptr;

		for (i = 0; i < total; i++)
		{
			char_ptr[i] = 0;
		}
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
