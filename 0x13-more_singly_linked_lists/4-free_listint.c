#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees nodes of linked list
 * @head: points to first node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}

}
