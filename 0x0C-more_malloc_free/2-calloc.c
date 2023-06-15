#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: num of elements in array
 * @size: size of each element
 *
 * Return: pointer to array, else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
