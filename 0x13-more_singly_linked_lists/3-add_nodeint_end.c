#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list.
 * @head: pointer to pointer to the first node of the linked list.
 * @n: value to be inserted at the end.
 *
 * Return: address of the new element or NULL if it failes.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
		*head = last_node;

	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = last_node;

		if (last_node == NULL)
			return (NULL);
	}
	return (last_node);
}
