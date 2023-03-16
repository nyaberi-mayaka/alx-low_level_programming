#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to the first node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
