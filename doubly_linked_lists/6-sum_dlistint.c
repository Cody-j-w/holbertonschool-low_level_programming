#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sums the values held in the nodes in a list
 * @head: the head of the list
 *
 * Return: the sum of the values
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *count;
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
