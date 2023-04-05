#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds node at end of linked list
 * @head: pointer to linked list
 * @n: data
 *
 * Return: addr of new node, if fails - NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tems;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_node;

		return (*head);
	}

	tems = *head;

	while (tems->next != NULL)
	{
		tems = tems->next;
	}

	tems->next = new_node;

	return (new_node);
}
