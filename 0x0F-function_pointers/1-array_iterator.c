#include "function_pointers.h"

/**
 * array_iterator - iteration of callback function
 * @array: array of arguments to be passed in callback func
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
