#include "lists.h"

/**
 * sum_listint - sums all the data in linked list
 * @head: head node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
