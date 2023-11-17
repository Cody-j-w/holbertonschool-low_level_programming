#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table being printed
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count = 0;
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (temp != NULL)
				{
					if (count > 0)
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
					temp = temp->next;
					count++;
				}
			}
			i++;
		}
		printf("}\n");
	}
}
