#include "lists.h"

/**
 * get_dnodeint_at_index - get node @ index
 * @head: head
 * @index: index to get node
 *
 * Return: node @index, else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int check_idx;
	dlistint_t temp;

	check_idx = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (temp != NULL)
		{
			if (check_idx == index)
			{
				return (temp);
			}
			temp = temp->next;
			check_idx += 1;
		}
	}
}
