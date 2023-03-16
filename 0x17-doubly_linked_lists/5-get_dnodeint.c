#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a linked list
 * @head: pointer to the first node of the linked list
 * @index: the nth node to be returned
 *
 * Return: The nth node of the list or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (i < index)
			head = head->next, i++;

		if (i == index)
			break;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}
