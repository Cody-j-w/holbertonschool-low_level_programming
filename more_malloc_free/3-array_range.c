#include "main.h"
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
	int i;
	int x = min;
	int *new_arr;

	if (min > max)
		return (0);
	new_arr = malloc((max - min) * sizeof(int));

	if (new_arr)
	{
		for (i = 0; x <= max; i++)
		{
			new_arr[i] = x;
			x++;
		}
		return (new_arr);
	}
	return (0);
}
