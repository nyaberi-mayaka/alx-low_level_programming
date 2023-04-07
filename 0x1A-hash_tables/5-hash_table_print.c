#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i;
	char flag = 0;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; ht && ht->array && i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			flag = 1;
		}
	}
	printf("}\n");
}
