#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns node at given index
 * @head: linked list
 * @index: index
 *
 * Return: node at given index, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *tems;

	if (head == NULL)
	{
		return (NULL);
	}

	tems = head;
	count = 0;
	while (tems != NULL)
	{
		count++;
		tems = tems->next;

		if (count == index)
		{
			return (tems);
		}
	}
	return (NULL);
}
