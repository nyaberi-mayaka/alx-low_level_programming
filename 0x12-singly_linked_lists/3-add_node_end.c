#include "lists.h"

/**
 * add_node_end - adds a new node at the end of linked @list_t list.
 * @head: pointer to pointer to the first node of @list_t.
 * @str: pointer to a string member of @list_t.
 *
 * Return: address of the new element or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node = malloc(sizeof(list_t));
	list_t *temp = malloc(sizeof(list_t));
	char *nstr;

	if (last_node == NULL || temp == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	nstr = strdup(str);
	if (nstr == NULL)
		return (NULL);

	last_node->str = nstr, last_node->len = strlen(nstr);
	last_node->next = NULL;

	if (*head == NULL)
		*head = last_node;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
	}

	temp->next = last_node;

	return (temp);
}
