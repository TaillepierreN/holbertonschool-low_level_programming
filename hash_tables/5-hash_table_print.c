#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_element;
	size_t index;
	int first_to_print = 1;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			if (first_to_print)
				printf("{");
			else
				printf(", ");
			current_element = ht->array[index];
			while (current_element)
			{
				printf("'%s': '%s'", current_element->key, current_element->value);
				current_element = current_element->next;
				if (current_element)
					printf(", ");
			}
			first_to_print = 0;
		}
	}
	printf("}\n");
}
