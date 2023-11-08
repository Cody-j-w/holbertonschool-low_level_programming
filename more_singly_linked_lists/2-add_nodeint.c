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

listint_t *add_nodeint(listint_t **head, const int num)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = num;
	new_node->next = *head;
	*head = new_node;
	
	return (new_node);
}
