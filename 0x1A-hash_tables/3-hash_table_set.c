#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to the hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index;
	hash_node_t *temp = NULL;

	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		ht->array[index] = new_node;

	else
	{
		temp = ht->array[index];

		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
	}
	return (1);
}
