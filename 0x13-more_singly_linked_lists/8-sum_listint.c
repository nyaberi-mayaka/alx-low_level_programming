#include "lists.h"

/**
 * sum_listint - determines the sum of all the data of a linked list.
 * @head: pointer to the first node of the linked list.
 *
 * Return: the sum of all the data of the linked list or
 * 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int total;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	total = 0;

	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (total);
}
