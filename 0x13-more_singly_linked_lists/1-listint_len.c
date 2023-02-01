#include "lists.h"

/**
 * listint_len - detemines the number of elements in a linked list.
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
