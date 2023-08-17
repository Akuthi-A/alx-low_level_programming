#include "lists.h"

/**
 * add_dnodeint - adds a node @ beg
 * @head: head
 * @n: data
 *
 * Return: address of new node, else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
