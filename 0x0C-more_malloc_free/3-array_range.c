#include "main.h"

/**
 * array_range - allocate memory for array of int
 * @min: min value in array
 * @max: max value in array
 *
 * Return: pointer to array, else NULL
 */

int *array_range(int min, int max)
{
	int *arr, i;
	int total = min;
	int elems = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)malloc(sizeof(int) * elems);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < elems; i++)
	{
		arr[i] = total;
		total += 1;
	}

	return (arr);
}
