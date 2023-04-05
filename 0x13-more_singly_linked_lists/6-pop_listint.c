#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes first node
 * @head: pointer to pointer of first node
 *
 * Return: head node's data, if empty - 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tems;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tems = (*head);
		(*head) = (*head)->next;
		free(tems);

		return ((*head)->n);
	}
}
