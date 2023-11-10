#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a specified index
 * @head: the head of the list
 * @idx: the index the new node is being inserted into
 * @n: the value held in the new node
 *
 * Return: the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *prev = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		*head = new_node;
		return(*head);
	}
	prev = *head;
	while (i < idx - 1)
	{
		prev = prev->next;
		i++;
	}
	new_node->next = prev->next;
	prev->next = new_node;
	return (new_node);
}
