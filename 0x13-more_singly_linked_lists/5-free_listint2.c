#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees node of linked list
 * @head: pointer to pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	while (*head != NULL)
	{
		curr = *head;
		(*head) = (*head)->next;
		free(curr);
	}

	(*head) = NULL;

}
