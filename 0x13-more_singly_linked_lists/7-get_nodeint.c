#include "lists.h"

/**
 * get_nodeint_at_index - finds the node at a given index.
 * @head: pointer to the first node of the linked list.
 * @index: the nth node of the linked list.
 *
 * Return: the nth node of a linked list or NULL if it doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 1;

	if (index > listint_len(head) - 1)
		return (NULL);

	temp = head;

	while (i < index + 1)
		temp = temp->next, i++;

	return (temp);
}

/**
 * listint_len - determines the number of elements in a linked list.
 * @h: pointer to the first node of the list.
 *
 * Return: number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
