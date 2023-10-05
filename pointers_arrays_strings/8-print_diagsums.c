#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the diagonals in a 2D array
 *
 * @arr: a 2D array of ints
 * @size: the size of the internal arrays in arr
 */

void print_diagsums(int *arr, int size);
{
	int newArr[size][size] = arr;
	int i;
	sum_x = 0;
	sum_y = 0;

	for (i = 0; i < size; i++)
	{
		sum_x += newArr[i][i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum_y += newArr[i][i];
	}

	printf("%d\n", sum_x);
	printf("%d\n", sum_y);
}

