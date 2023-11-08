#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the data of all nodes that follow @head
 * @head: the list node given as the beginning of the list to be printed
 *
 * Return: the length of the list
*/

size_t print_list(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		if (head->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
	}
	return (count);
}