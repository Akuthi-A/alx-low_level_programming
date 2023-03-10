#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: pointer memory will be copied to
 * @src: pointer memory will be copied from
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
