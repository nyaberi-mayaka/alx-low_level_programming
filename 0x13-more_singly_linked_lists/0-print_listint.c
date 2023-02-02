#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list.
 * @h: pointer to the first node of the list.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (1 + print_listint(h->next));
	}
	else
		return (0);
}
