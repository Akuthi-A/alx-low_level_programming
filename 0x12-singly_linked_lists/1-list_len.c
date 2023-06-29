#include "lists.h"

/**
 * list_len - return the number of elements in a linked list
 * @h: head node
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h != NULL)
	{
		h = h->next;
		count++;

	}

	return (count);
}
