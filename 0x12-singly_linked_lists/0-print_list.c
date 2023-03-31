#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
	{
		return (0);
	}

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}
	return (count);
}
