#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - linearly searches an array for a specified value
 * @arr: the array being searched
 * @size: the length of the array being searched
 * @val: the value being searched for
 *
 * Return: val, or -1 if val is not found
*/

int linear_search(int *arr, size_t size, int val)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, arr[i]);
		if (arr[i] == val)
			return (i);
	}
	return (-1);
}
