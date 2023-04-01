#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free memory used by linked list
 * @head - linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
