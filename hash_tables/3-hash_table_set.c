#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table where to add or update the element
 * @key: key of the element (string)
 * @value: value associated with the key (duplicated)
 * Return: 1 on success, else 0
 */
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *element;

	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (NULL);
	element->key = malloc(strlen(key) + 1);
	element->value = malloc(strlen(value) + 1);
	if (!element->key || !element->value)
	{
		free(element);
		return (NULL);
	}
	element->next = NULL;
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element, cu;

	index = key_index(key, ht->size);

	new_element = create_element(key, value);

	return (1);
}
