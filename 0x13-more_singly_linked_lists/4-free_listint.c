#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: head node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *curr, *temp;

	if (head == NULL)
		return;

	curr = head;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}
