#include "hash_tables.h"

/**
 * hash_table_create - a fnction that creates a hash table
 * @size: size of the array of type hash_table_t.
 *
 * Return: A pointer to the newly created hash table or
 *         NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t *));

	if (!new_table->array)
		return (NULL);
	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
