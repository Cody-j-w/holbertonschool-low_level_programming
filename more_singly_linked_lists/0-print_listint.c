#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints the integers in the list
 * @head: the beginning of the list
 *
 * Return: the number of nodes in the list
*/

size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		printf("%d\n", head->n);
		head = head->next;
	}
	return (count);
}
