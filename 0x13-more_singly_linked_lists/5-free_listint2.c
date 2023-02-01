#include "lists.h"

/**
 * free_listint2 - frees a linnked list.
 * @head: pointer to the first node of the list.
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
/*	free(*head);*/
}
