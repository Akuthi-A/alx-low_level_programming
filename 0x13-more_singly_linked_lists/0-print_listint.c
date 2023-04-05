#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - prints elements of linked list
 * @h: linked list
 *
 * Return: num of nodes in linked list
 */


size_t print_listint(const listint_t *h)
{
	int count;

	if (h == NULL)
	{
		return (0);
	}

	count = 0;
	while (h != 0)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
