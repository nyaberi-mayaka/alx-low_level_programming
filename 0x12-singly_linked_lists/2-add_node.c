#include "lists.h"

/**
 * add_node - adds a new node at the begining of a
 * linked list
 * @head: head of the linked list
 * @str: value of the node
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *n_str;
	list_t *node;

	if (str == NULL)
		return (NULL);

	n_str = strdup(str);
	if (n_str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = n_str;
	node->len = strlen(n_str);

	if (head == NULL)
		node->next = NULL;
	else
		node->next = *head;

	*head = node;
	return (node);
}
