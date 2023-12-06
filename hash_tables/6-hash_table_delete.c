#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *element_to_delete, *temp;
	size_t index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			element_to_delete = ht->array[index];

			while (element_to_delete)
			{
				temp = element_to_delete->next;
				free(element_to_delete->key);
				free(element_to_delete->value);
				free(element_to_delete);
				element_to_delete = temp;
			}
			
		}
	}
	free(ht->array);
	free(ht);
}
