#include "hash_tables.h"

/**
 * create_element - create an element to add to the hash table
 * @key: key of the element
 * @value: value of the element
 * Return: new element created
*/
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *element;

	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (NULL);
	element->key = strdup(key);
	if (!element->key)
	{
		free(element);
		return (NULL);
	}
	element->value = strdup(value);
	element->next = NULL;
	return (element);
}
/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table where to add or update the element
 * @key: key of the element (string)
 * @value: value associated with the key (duplicated)
 * Return: 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *dupeValue;
	hash_node_t *new_element, *current_element;

	if (!key || !ht || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	dupeValue = strdup(value);
	if (!dupeValue)
		return (0);
	current_element = ht->array[index];
	if (current_element)
	{
		while (current_element != NULL)
		{
			if (strcmp(current_element->key, key) == 0)
			{
				free(current_element->value);
				current_element->value = strdup(dupeValue);
				free(dupeValue);
				return (1);
			}
			current_element = current_element->next;
		}
	}
	new_element = create_element(key, dupeValue);
	if (!new_element)
	{
		free(dupeValue);
		return (0);
	}
	free(dupeValue);
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);
}
