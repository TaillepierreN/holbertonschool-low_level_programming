#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to check
 * @key: key to find in the hash table
 * Return: value of the associated element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *element;

	if (!ht || !key)
		return (NULL);
	index = key_index(key, ht->size);
	element = ht->array[index];
	while (element)
	{
		if (strcmp(element->key, key))
		{
			return (element->value);
		}
		element = element->next;
	}
	return (NULL);
}
