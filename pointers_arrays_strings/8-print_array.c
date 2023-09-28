#include "main.h"
#include <stdio.h>

/**
 * print_array - accepts an array, and prints a certain number of elements
 * of it.
 * @arr: an array of integers
 * @count: the number of elements of arr to be printed
 */

void print_array(int *arr, int count)
{
	int i;

	for(i = 0; i < count ; i++)
	{
		printf("%d\n", arr[i]);
	}
}
