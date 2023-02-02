#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the head of the linked list.
 *
 * Return: head node's data or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	else
	{
		temp = *head;
		*head = temp->next;
		n = temp->n;
		free(temp);
	}
	return (n);
}
