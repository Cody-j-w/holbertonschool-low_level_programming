#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - find a value in an array by halfing the array
 * @arr: the array
 * @size: the size of the array
 * @value: the value being sought
 * Return: the index of the value, or -1 if it is not found
*/

int binary_search(int *arr, size_t size, int value)
{
	size_t index, left = 0, right = size - 1, i;

	if (arr == NULL)
		return (-1);
	while (left <= right)
	{
		index = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i > left)
				printf(", ");
			printf("%d", arr[i]);
		}
		printf("\n");
		if (left == right && arr[index] != value)
			return (-1);
		if (arr[index] == value)
			return (index);
		if (arr[index] < value)
			left = index + 1;
		else
			right = index - 1;
	}
	return (-1);
}
