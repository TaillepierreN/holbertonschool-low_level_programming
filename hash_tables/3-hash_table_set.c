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
	element->key = malloc(strlen(key) + 1);
	element->value = malloc(strlen(value) + 1);
	if (!element->key || !element->value)
	{
		free(element->key);
		free(element->value);
		free(element);
		return (NULL);
	}
	strcpy(element->key, key);
	strcpy(element->value, value);
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
	unsigned char *unsigned_key;
	hash_node_t *new_element, *current_element;

	if (key[0] == '\0' || key == NULL)
		return (0);
	unsigned_key = malloc(sizeof(unsigned char) * strlen(key));
	memcpy(unsigned_key, key, strlen(key) + 1);
	index = key_index(unsigned_key, ht->size);
	free(unsigned_key);
	new_element = create_element(key, value);
	if (!new_element)
		return (0);
	current_element = ht->array[index];
	if (current_element)
		new_element->next = ht->array[index];

	ht->array[index] = new_element;
	return (1);
}
