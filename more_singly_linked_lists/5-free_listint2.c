#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees a list from allocated memory and sets @head to NULL
 * @head: the beginning of the list to be freed
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while ((*head)->next != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		free(*head);
		*head = NULL;
	}
}
