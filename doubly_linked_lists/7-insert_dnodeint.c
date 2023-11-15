#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specified index
 * @h: the h of the list
 * @idx: the index the new node is being inserted into
 * @n: the value held in the new node
 *
 * Return: the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = NULL;
	dlistint_t *tempnext = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (*h);
	}
	temp = *h;
	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	if (temp->next != NULL)
	{
		tempnext = temp->next;
		tempnext->prev = new_node;
	}
	new_node->next = tempnext;
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
