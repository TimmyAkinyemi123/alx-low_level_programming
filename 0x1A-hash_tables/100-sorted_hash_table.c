#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *new_table;
    unsigned long int i;

    if (size <= 0)
        return (NULL);

    new_table = malloc(sizeof(shash_table_t));
    if (new_table == NULL)
        return (NULL);

    new_table->size = size;
    new_table->array = malloc(sizeof(shash_node_t *) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }

    for (i = 0; i < size; i++)
    {
        new_table->array[i] = NULL;
    }

    new_table->shead = NULL;
    new_table->stail = NULL;

    return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (can be an empty string).
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current_node, *prev_node;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    /* Check for an existing node with the same key */
    current_node = ht->array[index];
    while (current_node != NULL)
    {
        if (strcmp(current_node->key, key) == 0)
        {
            free(current_node->value);
            current_node->value = strdup(value);
            if (current_node->value == NULL)
                return (0);
            return (1); 
        }
        current_node = current_node->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    /* Handle linked list */
    if (ht->shead == NULL || strcmp(key, ht->shead->key) <= 0)
    {
        new_node->sprev = NULL;
        new_node->snext = ht->shead;
        if (ht->shead)
            ht->shead->sprev = new_node;
        ht->shead = new_node;
        if (ht->stail == NULL)
            ht->stail = new_node;
    }
    else
    {
        prev_node = ht->shead;
        while (prev_node->snext && strcmp(key, prev_node->snext->key) > 0)
        {
            prev_node = prev_node->snext;
        }
        new_node->sprev = prev_node;
        new_node->snext = prev_node->snext;
        if (prev_node->snext)
            prev_node->snext->sprev = new_node;
        prev_node->snext = new_node;
        if (prev_node == ht->stail)
            ht->stail = new_node;
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1); 
}

/**
 * shash_table_get - Retrieves a value associated with a key in a sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to look up.
 *
 * Return: The value associated with the key, or NULL if not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *current_node;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);

    current_node = ht->array[index];
    while (current_node != NULL)
    {
        if (strcmp(current_node->key, key) == 0)
            return (current_node->value);
        current_node = current_node->next;
    }

    return (NULL); /* Key not found */
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table to be printed.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current_node;

    if (ht == NULL)
        return;

    current_node = ht->shead;

    printf("{");
    while (current_node != NULL)
    {
        printf("'%s': '%s'", current_node->key, current_node->value);
        if (current_node->snext != NULL)
            printf(", ");
        current_node = current_node->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The sorted hash table to be printed.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current_node;

    if (ht == NULL)
        return;

    current_node = ht->stail;

    printf("{");
    while (current_node != NULL)
    {
        printf("'%s': '%s'", current_node->key, current_node->value);
        if (current_node->sprev != NULL)
            printf(", ");
        current_node = current_node->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current_node, *temp_node;

    if (ht == NULL)
        return;

    current_node = ht->shead;
    while (current_node != NULL)
    {
        temp_node = current_node;
        current_node = current_node->snext;
        free(temp_node->key);
        free(temp_node->value);
        free(temp_node);
    }

    free(ht->array);
    free(ht);
}
