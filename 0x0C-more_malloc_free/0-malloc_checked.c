#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size in bytes
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
