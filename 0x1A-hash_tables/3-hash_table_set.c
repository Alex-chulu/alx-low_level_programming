#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht:  the hash table you want to add or update the key/value to.
 * @key: The key - cannot be an empty string.
 * @value: Value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_2;
	unsigned long int idx, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_2 = strdup(value);
	if (value_2 == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (x = idx; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = value_2;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_2);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_2;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
