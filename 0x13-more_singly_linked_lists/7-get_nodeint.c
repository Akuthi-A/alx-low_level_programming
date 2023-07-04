#include "lists.h"

/**
 * get_nodeint_at_index - gets node @index
 * @head: head node
 * @index: index of node to get
 *
 * Return: node @index, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		count++;
		temp = temp->next;
	}

	return (NULL);
}
