#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table being deleted
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (ht)
	{
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (ht->array[i] != NULL)
				{
					temp = temp->next;
					free(ht->array[i]->key);
					free(ht->array[i]->value);
					free(ht->array[i]);
					ht->array[i] = temp;
				}
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
