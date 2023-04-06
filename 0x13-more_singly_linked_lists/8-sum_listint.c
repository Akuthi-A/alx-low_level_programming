#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sums all the data of a linked list
 * @head: linked list
 *
 * Return: sum of all the data of a linked list, else 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
