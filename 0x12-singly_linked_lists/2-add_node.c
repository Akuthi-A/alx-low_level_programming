#include "lists.h"
#include <string.h>

/**
 * add_node - adds node @ beg of linked list
 * @head: head node
 * @str: data to be inserted
 *
 * Return: address of new element, else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = (list_t *)(malloc)(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *(head);
	*(head) = newnode;

	return (newnode);
}
