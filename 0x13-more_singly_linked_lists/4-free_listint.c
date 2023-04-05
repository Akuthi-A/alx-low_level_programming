#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees linked list
 * @head: linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
