#include "main.h"

/**
 * swap_int - swaps the values of two int variables
 * @a: pointer used to swap variables
 * @b: pointer used to swap variables
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
