#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node at the end of linked list
 * @head: head node
 * @str: data of new node
 *
 * Return: address of new node, else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	temp = *(head);
	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*(head) == NULL)
	{
		*(head) = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newnode;
	}
	return (newnode);
}
