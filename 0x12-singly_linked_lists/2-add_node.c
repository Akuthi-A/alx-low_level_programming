#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds node at start of linked list
 * @head: pointer to node
 * @str: string
 *
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_node;

		return (*head);
	}

	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
