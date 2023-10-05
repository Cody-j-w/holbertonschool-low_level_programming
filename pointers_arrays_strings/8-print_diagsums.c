#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the diagonals in a 2D array
 *
 * @arr: a 2D array of ints
 * @size: the size of the internal arrays in arr
 */

void print_diagsums(int *arr, int size)
{
	int i = 0;
	int sum_x = 0;
	int sum_y = 0;

	while (i < (size*size))
	{
		sum_x += arr[i];
		i = i + 1 + size;
	}
	i = size - 1;	
	while ( i >= 0)
	{
		sum_y += arr[i];
		i = i + size - 1;
	}

	printf("%d, %d\n", sum_x, sum_y);
}

