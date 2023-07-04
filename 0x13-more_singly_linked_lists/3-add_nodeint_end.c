#include "lists.h"

/**
 * add_nodeint_end - addes node @end of linked list
 * @head: head node
 * @n: data of new node
 *
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (newnode);

	newnode->n = n;
	newnode->next = NULL;

	if (*(head) == NULL)
	{
		*(head) = newnode;
	}
	else
	{
		temp = *(head);

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	return (newnode);
}
