#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - removes the head from a listint list and returns its value
 * @head: a pointer to the head of the given list, to be popped.
 *
 * Return: the value held at @head.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL)
		return (0);
	temp = *head;
	value = temp->n;
	*head = (*head)->next;
	free(temp);
	return (value);
}
