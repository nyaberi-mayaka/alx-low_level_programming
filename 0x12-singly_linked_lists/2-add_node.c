#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a @list_t list.
 * @head: pointer to pointer to the first node.
 * @str: pointer to a string member of @lists.
 *
 * Return: address of the new element or null if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = strlen(temp->str);

	temp->next = *head;
	*head = temp;

	if (!*head)
		return (NULL);
	return (*head);
}
