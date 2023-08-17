#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node @ given index
 * @h: head (pointer to a pointer)
 * @idx: index
 * @n: data of new node
 *
 * Return: addr of newnode, else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int check_idx;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (*(h) == NULL)
	{
		return (NULL);
	}
	temp = *(h);

	if (idx == 0)
	{
		newnode->next = temp;
		temp->prev = newnode;
		*(h) = newnode;
	}

	check_idx = 0;
	while (temp != NULL)
	{
		if (check_idx == idx - 1)
		{
			temp->next->prev = newnode;
			newnode->next = temp->next;
			temp->next = newnode;
			newnode->prev = temp;
		}
		temp = temp->next;
		check_idx++;
	}
	return (newnode);
}
