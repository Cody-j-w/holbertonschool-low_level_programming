#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * key_index - get the hash table index of a key
 * @key: the key being indexed
 * @size: the size of the hash table
 *
 * Return: the index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
