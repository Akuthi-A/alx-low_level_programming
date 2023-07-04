#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: head node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr, *temp;

	if (head == NULL || *(head))
		return;

	curr = *(head);
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}

	*(head) = NULL;
}
