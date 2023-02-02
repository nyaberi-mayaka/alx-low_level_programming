#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index @index of a linked list.
 * @head: double pointer to the first node of the linked list.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextnode, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index > listint_len(*head) - 1)
		return (-1);
	i = 0;

	temp =  *head;

	if (index == 0)
		return (pop_listint(head));

	while (i < index - 1)
		temp = temp->next, i++;

	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

	if (nextnode == NULL)
		return (1);
	else
		return (-1);
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

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the head of the linked list.
 *
 * Return: 1 on success -1 on failure.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (-1);

	else
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	return (1);
}
