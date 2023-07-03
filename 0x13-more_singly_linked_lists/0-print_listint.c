#include "lists.h"

/**
 * print_listint - prints data in linked list
 * @h: head node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (NULL);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
