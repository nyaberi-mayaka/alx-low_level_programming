#include "lists.h"

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
