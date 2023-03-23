#include "main.h"

/**
 * int_index - searches for a number
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of number in array
 * -1 if size <= 0 or if number is not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
