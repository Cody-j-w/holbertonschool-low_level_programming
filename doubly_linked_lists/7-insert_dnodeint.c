#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specified index
 * @head: the head of the list
 * @idx: the index the new node is being inserted into
 * @n: the value held in the new node
 *
 * Return: the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new_node->next = temp->next;
	new_node->next->prev = new_node;
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
