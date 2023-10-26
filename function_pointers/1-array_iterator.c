#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - take an array, and execute a function on each
 * element of that array.
 * @array: the array being passed to array_iterator
 * @size: the size of the array
 * @action: the function being executed on each array element
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
	{
		if (action)
		{
			for (i = 0; i < size; i++)
			{
				action(array[i]);
			}
		}
	}
}
