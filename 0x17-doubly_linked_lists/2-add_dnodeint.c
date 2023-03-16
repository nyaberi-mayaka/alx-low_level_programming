#include "lists.h"

/**
 * add_dnodeint - adda a new node at the beginning of a linked list
 * @head: the first node of the list
 * @n: the data to insert in the new node
 *
 * Return: address of the new element or, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = new_node->next = NULL;
	new_node->n = n;

	if (!*head)
		*head = new_node;

	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (*head);
}
