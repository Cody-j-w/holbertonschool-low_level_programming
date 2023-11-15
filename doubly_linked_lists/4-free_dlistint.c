#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - frees a list from allocated memory
 * @head: the beginning of the list to be freed
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
