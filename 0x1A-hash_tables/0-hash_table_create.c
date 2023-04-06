#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array of type hash_table_t.
 *
 * Return: Pointer to created hash table or NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t *));

	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
