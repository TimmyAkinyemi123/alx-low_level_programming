#include "hash_tables.h"
#include <stdio.h>
#include <stddef.h>
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first = 1;
	hash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", current_node->key,
					current_node->value);
			current_node = current_node->next;
			first = 0;
		}
	}
	printf("}\n");
}
