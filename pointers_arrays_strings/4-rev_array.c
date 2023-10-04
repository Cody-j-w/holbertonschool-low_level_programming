#include "main.h"

/**
 * reverse_array - accept an array, and reverse it.
 * @arr: the array that the function will reverse.
 * @n: the length of arr.
 */

void reverse_array(int *arr, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < n)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
