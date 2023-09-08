#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    int first = 1; /* To track whether it's the first element printed */

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        hash_node_t *current_node = ht->array[i];

        while (current_node != NULL)
        {
            if (!first)
                printf(", "); /* Print comma and space before each element */
            printf("'%s': '%s'", current_node->key, current_node->value);
            current_node = current_node->next;
            first = 0; /* Set to 0 after the first element is printed */
        }
    }
    printf("}\n");
}
