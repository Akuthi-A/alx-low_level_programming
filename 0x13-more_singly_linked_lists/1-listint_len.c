#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - counts num of elem in linked list
 * @h: linked list
 *
 * Return: num of nodes in linked list
 */

size_t listint_len(const listint_t *h)
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
