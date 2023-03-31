#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - prints all the elements of a linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
	{
		return (0);
	}

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
