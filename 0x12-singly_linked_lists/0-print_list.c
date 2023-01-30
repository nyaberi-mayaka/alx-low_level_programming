#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the first node.
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);

		else if (h->str == NULL)
			printf("[0] (nil)\n");
		h = h->next;
	}

	return (i);
}
