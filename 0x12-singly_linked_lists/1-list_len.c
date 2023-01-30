#include "lists.h"

/**
 * list_len - determines the number of elements in a linked @list_t list.
 * @h: pointer to the first node of the linked list.
 *
 * Return: the number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
