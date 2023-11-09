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

	while (head != NULL)
	{
		printf("Value of head's current position is: %d\n", (*head)->n);
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
