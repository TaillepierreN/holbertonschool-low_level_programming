#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(hash_table->size, sizeof(hash_node_t));
	if (!hash_table->array)
		return(NULL);
	return (hash_table);
}