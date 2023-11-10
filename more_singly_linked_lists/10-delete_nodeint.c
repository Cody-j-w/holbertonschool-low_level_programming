#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a specific node from a list
 * @head: the beginning node of the list
 * @index: the node that needs to be removed
 *
 * Return: 1 on a success, -1 on a failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = *head;
	while (i < index - 1)
	{
		if (prev == NULL)
			return (-1);
		prev = prev->next;
		i++;
	}
	temp = prev->next;
	if (temp->next != NULL)
		prev->next = temp->next;
	else
		prev->next = NULL;
	free(temp);
	return (1);
}
