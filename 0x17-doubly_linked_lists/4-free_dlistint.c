#include "lists.h"

/**
 * free_dlistint - frees nodes of a linked list
 * @head: head
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next, *current;

	current = head;
	while (current != NULL)
	{
		new = current->next;
		free(current->n);
		free(current);
		current = new;
	}
}
