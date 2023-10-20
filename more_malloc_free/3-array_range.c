#include "main.h"
#include "set_range.c"
#include <stdlib.h>

/**
 * array_range - create an array from min to max, inclusive
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 *
 * Return: the finished array
 */

int *array_range(int min, int max)
{
	int *new_arr;

	if (min > max)
		return (0);
	new_arr = malloc((max - (min - 1)) * sizeof(int));

	if (new_arr)
	
	return (set_range(new_arr, min, max));
	return (0);
}
