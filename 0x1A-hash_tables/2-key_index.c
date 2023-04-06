#include "hash_tables.h"

/**
 * key_index - determines the index of a key in the hash table
 * @key: the key
 * @size: the size of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
