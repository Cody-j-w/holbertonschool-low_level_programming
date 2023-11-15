#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - traverse a list to get a specified node
 * @head: the head of the provided list
 * @index: the node that is to be found
 *
 * Return: the node at the specified index.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		++i;
		temp = temp->next;
	}
	return (NULL);
}
