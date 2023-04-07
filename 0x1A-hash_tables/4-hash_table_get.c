#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: THe hash table to look into
 * @key: The key you are looking for
 *
 * Return: The value assoiated with the element or,
 *         NULL if the key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (!ht || !key)
		return (NULL);


	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		temp = ht->array[index];

		while (temp)
		{
			if (strcmp(key, temp->key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
