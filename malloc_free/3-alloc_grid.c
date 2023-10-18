#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate a multidimensional array in memory and fill all
 * elements of the array with 0
 * @width: the first dimension of the array, the outer array, the width
 * @height: the second dimension of the array, the inner array, the depth
 *
 * Return: a pointer to the array, or null if allocation failed
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width < 1 || height < 1)
		return (0);
	arr = (int **)malloc(sizeof(int *) * width);

	if (arr)
	{
		for (i = 0; i < width; i++)
		{
			arr[i] = (int *)malloc(sizeof(int) * height);
			if (arr[i])
			{
				for (j = 0; j < height; j++)
				{
					arr[i][j] = 0;
					j++;
				}
			}
			else
			{
				return (0);
			}
			i++;
			j = 0;
		}
		return (arr);
	}
	else
	{
		return (0);
	}
}
