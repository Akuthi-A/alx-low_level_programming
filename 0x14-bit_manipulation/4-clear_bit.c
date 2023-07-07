#include "main.h"

/**
 * clear_bit - set value @index to 0
 * @n: pointer to bit
 * @index: index
 *
 * Return: 1, else -1 (upon failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = sizeof(unsigned int) * 8;

	if (index >= i)
		return (-1);

	(*n) &= ~(1 << index);

	return (1);
}
