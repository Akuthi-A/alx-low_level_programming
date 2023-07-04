#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node @index pos
 * @head: head node
 * @idx: index
 * @n: data of newnode
 *
 * Return: addr of new node, else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	int count;

	newnode = (listint_t)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (newnode);

	newnode->n = n;
	newnode->next = NULL;

	temp = *head;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}

	count = 0;
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;

			return (newnode);
		}
		count++;
		temp = temp->next;
	}

	return (NULL);
}
