#include "lists.h"

/**
 * dlistint_len - determines length of a doubly linked list
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
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
