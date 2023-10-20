#include "main.h"
#include <stdlib.h>

/**
 * memset_range - function to set a range of integers in a pre-allocated
 * block of memory
 * @arr: the allocated block of memory
 * @min: the minimum value in the range
 * @max: the maximum value in the range
 * 
 * Return: the finished array
 */

 int *memset_range(int *arr, int min, int max)
 {
 	int i;

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
