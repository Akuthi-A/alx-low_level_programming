#include "lists.h"

/**
 * add_dnodeint_end - adds node @ end of linked list
 * @head: head
 * @n: data
 *
 * Return: address of new node, else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	temp = *head;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		(*head) = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (newnode);
}
