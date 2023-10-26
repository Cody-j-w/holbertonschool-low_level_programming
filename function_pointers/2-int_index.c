#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - compare an array to a value given by a function
 * pointer
 * @array: the array being compared.
 * @size: the size of @array.
 * @cmp: the function being used to compare @array.
 * 
 * Return: the index of the first element that matches, or -1
 * if the array is empty/NULL or contains no matches
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array)
	{
		if (size <=0)
		{
			if (cmp)
			{
				for (i = 0; i < size; i++)
				{
					if (cmp(array[i]) != 0)
						return (i);
				}
			}
		}
	}
	return (-1);
}
