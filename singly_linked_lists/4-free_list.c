#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees a list from allocated memory
 * @head: the beginning of the list to be freed
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp->str)
			free(temp->str);
		free(temp);
	}
}
