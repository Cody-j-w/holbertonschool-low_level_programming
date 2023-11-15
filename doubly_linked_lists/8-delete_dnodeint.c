#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a specific node from a list
 * @head: the beginning node of the list
 * @index: the node that needs to be removed
 *
 * Return: 1 on a success, -1 on a failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	dlistint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
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
	{
		prev->next = temp->next;
		temp->next->prev = prev;
	}
	else
		prev->next = NULL;
	free(temp);
	return (1);
}
