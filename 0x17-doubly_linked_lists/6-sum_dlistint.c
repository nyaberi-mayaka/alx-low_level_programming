#include "lists.h"

/**
 * sum_dlistint - finds the sum of al the data in a linked list
 * @head: pointer to the first node of the linked list
 *
 * Return: the sum of all the data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
