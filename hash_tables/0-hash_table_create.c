#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_create - creates a new hash table of specified size
 * @size: the size of the new hash table
 *
 * Return: the new hash table, or NULL if any part of the process fails
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *HT = malloc(sizeof(hash_table_t));

	if (!HT)
		return (NULL);
	HT->size = size;
	HT->array = malloc(HT->size * sizeof(hash_node_t *));
	if (!HT->array)
		return (NULL);

	for (i = 0; i < HT->size; i++)
	{
		HT->array[i] = NULL;
	}
	return (HT);
}
