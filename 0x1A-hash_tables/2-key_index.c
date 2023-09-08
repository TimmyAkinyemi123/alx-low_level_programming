#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table.
 * @key: The key to be hashed and indexed.
 * @size: The size of the hash table's array.
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value = hash_djb2(key);

    return (hash_value % size);
}
