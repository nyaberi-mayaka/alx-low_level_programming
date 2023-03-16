#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index @idx of a linked list
 * @head: the address of the first node of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	size_t i = 0;
	int flag;

	if (!*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	else
	{
		while (temp && i <= index)
		{
			if (i == index)
			{
				if (temp->next)
					temp->next->prev = temp->prev;

				temp->prev->next = temp->next;
				free(temp), flag = 1;
				break;
			}
			temp = temp->next, i++, flag = 0;
		}

		if (flag == 1)
			return (1);
		else
			return (-1);
	}
}
