#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - sets a new node into a hash table
 * @h: the hash table
 * @key: the key of the new node
 * @value: the value of the new node
 *
 * Return: 1 on success, 0 on failure
*/

int hash_table_set(hash_table_t *h, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	char *node_key = strdup(key);
	char *node_val = strdup(value);
	hash_node_t *temp = NULL;

	if (!h)
		return (0);
	index = key_index((const unsigned char *)key, h->size);
	if (!new_node)
		return (0);
	new_node->key = node_key;
	new_node->value = node_val;
	new_node->next = NULL;

	if (h->array[index] == NULL)
	{
		h->array[index] = new_node;
		return (1);
	}
	if (strcmp(key, h->array[index]->key) == 0)
	{
		temp = h->array[index];
		new_node->next = h->array[index]->next;
		h->array[index] = new_node;
		free(temp->key);
		free(temp->value);
		free(temp);
		return (1);
	}
	temp = h->array[index];
	new_node->next = temp;
	h->array[index] = new_node;
	return (1);
}
