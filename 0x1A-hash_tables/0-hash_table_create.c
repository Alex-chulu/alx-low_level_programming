#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: Array size.
 *
 * Return: Pointer to the newly created hash table else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	unsigned long int x;

	ht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);
	if (hasht->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		hasht->array[x] = NULL;

	return (hasht);
}
