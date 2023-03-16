#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: the first node of the linked list.
 * @n: the data to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
	}
	return (new_node);
}
