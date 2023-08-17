#include "lists.h"

/**
 * sum_dlistint - sums all data in linked list
 * @head: head
 *
 * Return: sum of all the data, else 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	temp = head;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
