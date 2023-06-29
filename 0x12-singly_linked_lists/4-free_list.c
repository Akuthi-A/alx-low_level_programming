#include "lists.h"

/**
 * free_list - frees memory of linked list
 * @head: head node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *next, *current;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
