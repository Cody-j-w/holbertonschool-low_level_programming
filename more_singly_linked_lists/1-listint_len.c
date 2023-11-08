#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - gets the list of a provided linked list
 * @head: the beginning of the list
 *
 * Return: the length of the list that follows @head
*/

size_t listint_len(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
