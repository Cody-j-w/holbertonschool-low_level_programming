#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the beginning of the linked list
 * @head: the head of the existing list
 * @str: the string to be held in the new node
 * 
 * Return: the new node
*/

list_t *add_node(list_t **head, const char *str)
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
	new_node->next = *head;
	}
	return (new_node);
}
