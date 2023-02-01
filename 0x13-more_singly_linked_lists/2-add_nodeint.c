#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list.
 * @head: pointer to the first node of the linked list.
 * @n: value to be inserted.
 *
 * Return: address of the new element or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (head == NULL)
		temp->next = NULL;
	else
		temp->next = *head;

	*head = temp;

	if (temp == NULL)
		return (NULL);
	return (temp);
}
