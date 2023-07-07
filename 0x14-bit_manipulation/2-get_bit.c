#include "main.h"

/**
 * get_bit - gets bit @index
 * @n: bit
 * @index: index of bit to get
 *
 * Return: value of bit @index, else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = sizeof(unsigned int) * 8;

	if (index >= i)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
