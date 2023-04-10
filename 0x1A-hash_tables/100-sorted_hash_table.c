#include "hash_tables.h"

/**
 * shash_table_create - create a shash table as implemented in php
 * @size: The array size of the hash table
 * Return: a shash table pointer
 */
shash_table_t *shash_table_create(unsigned long int size)
{
}

/**
 * shash_table_set - adds a new element to the shash table
 * @ht: pointer to a shash table
 * @key: pointer to the key string
 * @value: The value associated with the key
 *
 * Return: 0 if it fails
           1 if it succeeds
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
}

/**
 * shash_table_get - finds the value associated with a key
 * @key: The key
 *
 * Return: The value associated with the key
           or NULL id no value or key is NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
}
/**
 * shash_table_print - prints the shash table using the sorted linked list
 * @ht: pointer to the shash table
 */
void shash_table_print(const shash_table_t *ht)
{
}

/**
 * shash_table_print_rev - d print the hash tables key/value pairs in
 *                         reverse order using the sorted linked list
 * @ht: pointer to the shash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
}

/**
 * shash_table_delete - deletes a shash table
 * @ht: pointer to the shash table
 */
void shash_table_delete(shash_table_t *ht)
{
}
