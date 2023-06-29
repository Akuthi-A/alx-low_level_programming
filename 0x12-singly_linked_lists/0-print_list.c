#include "lists.h"

/**
 * print_list - prints data in linked list
 * @h: head node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *temp;
	size_t count;

	count = 0;

	if (h == NULL)
	{
		return (count);
	}

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			temp->str = "(nil)";
			temp->len = 0;
		}
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;

	}

	return (count);
}
