#include "main.h"

/**
 * flip_bits - counts num of bits to be flipped
 *		to get from one number to another
 * @n: number
 * @m: number to flip n to
 *
 * Return: number of bits you would need to flip to
 *	get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

