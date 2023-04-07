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
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
	{
		ht->array[index] = insert_new_node(key, value);
		return (1);
	}

	else
	{
		temp = ht->array[index];

		while (temp)
		{
			if (!strcmp(temp->key, key))
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		temp = insert_new_node(key, value);
		temp->next = ht->array[index];
		ht->array[index] = temp;
		return (1);
	}
	return (0);
}


/**
 * insert_new_node - creates a new hash node
 * @key: The kay value to be stored
 * @value: the value associated with the key to be stored
 *
 * Return: pointer to the newly created hash node or NULL if it fails
 */
hash_node_t *insert_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (NULL);


	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
