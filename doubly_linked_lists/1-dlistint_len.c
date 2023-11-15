#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - gets the list of a provided doubly linked list
 * @head: the beginning of the list
 *
 * Return: the length of the list that follows @head
*/

size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
