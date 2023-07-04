#include "lists.h"

/**
 * listint_len - determine number of nodes in linked list
 * @h: head node
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
