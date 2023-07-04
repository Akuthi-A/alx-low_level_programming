#include "lists.h"

/**
 * pop_listint - deletes node @beg
 * @head: head node
 *
 * Return: head node, else 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*(head) == NULL || head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *(head);
		*(head) = (*head)->next;
		free(temp);
		temp = NULL;

		return ((*head)->n);
	}
}
