#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position.
 * @head:double pointer to the first node of the linked list.
 * @idx: index where the new node should be added.
 * @n: value to be added @idx in the linked list.
 *
 * Return: address of thte new node or null if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newnode = malloc(sizeof(listint_t));
	unsigned int i;

	if (newnode == NULL)
		return (NULL);

	if (idx > listint_len(*head) - 1)
		return (NULL);

	temp = *head;
	newnode->n = n, newnode->next = NULL;

	i = 0;
	while (i < idx - 1)
		temp = temp->next, i++;

	newnode->next = temp->next;
	temp->next = newnode;

	return (temp->next);
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
