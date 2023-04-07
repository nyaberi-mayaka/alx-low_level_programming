#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	u_long i;
	hash_node_t *temp = NULL;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];

			while (temp)
			{
				ht->array[i] = temp->next;
				free(temp->value), free(temp->key);
				free(temp);
				temp = ht->array[i];
			}
		}
		free(ht->array);
		free(ht);
	}
}
