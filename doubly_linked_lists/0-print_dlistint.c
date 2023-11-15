#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints the values in a doubly linked list and returns
 * the number of nodes
 * @head: the head of the list
 *
 * Return: the number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;
	const dlistint_t *temp = NULL;

	if (head == NULL)
		return (0);
	temp = head;
	if (head->prev != NULL)
	{
		while (temp->prev != NULL)
		{
			temp = temp->prev;
		}
	}
	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
