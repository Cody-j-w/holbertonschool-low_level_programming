#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node to the end of the linked list
 * @head: the head of the existing list
 * @str: the string to be held in the new node
 *
 * Return: the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node)
	{
		if (new_node == NULL)
		{
			return (NULL);
		}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = new_node;
	}

	}
	return (new_node);
}
