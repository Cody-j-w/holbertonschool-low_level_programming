#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - gets a value from a hash table by its key
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value associated with the key, or NULL if the search fails
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	printf("At index: %d\n", index);
	while (temp != NULL)
	{
		printf("Current node's value is: %s\n", temp->value);
		if (temp->key == key)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
