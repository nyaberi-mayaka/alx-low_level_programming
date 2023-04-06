#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i;
	int flag = 0;

	if (!ht || ht->size == 0)
	{
		printf("{}\n");
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
		{
			if (flag && ht->array[i + 1])
				printf(", ");
			continue;
		}

		temp = ht->array[i];

		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->next)
				printf(", ");
			temp = temp->next;
			flag = 1;
		}

		if (ht->array[i + 1])
			flag = 0, printf(", ");
	}
	printf("}\n");
}
