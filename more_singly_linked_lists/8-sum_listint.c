#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums the values held in the nodes in a list
 * @head: the head of the list
 *
 * Return: the sum of the values
*/

int sum_listint(listint_t *head)
{
	listint_t *count;
	int sum = 0;

	if (head != NULL)
	{
		count = head;
		while (count != NULL)
		{
			sum += count->n;
			count = count->next;
		}
	}
	return (sum);
}
