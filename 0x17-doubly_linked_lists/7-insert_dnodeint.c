#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of the first node of the list
 * @idx: position to insert the new node
 * @n: The data to sote in the new node
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len, i = 0;
	dlistint_t *new_node = NULL, *temp = NULL;

	len = dlistint_len(*h);

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));

	else if (idx == len)
		return (add_dnodeint_end(h, n));

	else if (idx > len)
		return (NULL);

	else
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = new_node->prev = NULL;

		temp = *h;
		while (i < idx && temp->next)
		{
			temp = temp->next, i++;
			if (i == idx)
				break;
		}
		new_node->next = temp;
		new_node->prev = temp->prev;
		temp->prev->next = new_node;
		temp->prev = new_node;

		return (new_node);
	}
}

/**
 * dlistint_len - determines the number of elements in a linked list
 * @h: pointer to the first node of the list.
 *
 * Return: The number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
		n++, h = h->next;
	return (n);
}
