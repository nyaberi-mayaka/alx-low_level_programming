#include "lists.h"

/**
 * print_dlistint - prints the elements of a list
 * @h: pointer to the first node of the list
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++, h = h->next;
	}
	return (n);
}
