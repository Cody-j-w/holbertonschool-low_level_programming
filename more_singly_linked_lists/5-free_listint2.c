#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a list from allocated memory
 * @head: the beginning of the list to be freed
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *lead;

	lead = *head;

	while (lead != NULL)
	{
		temp = lead;
		lead = lead->next;
		free(temp);
	}
	head = NULL;
}
