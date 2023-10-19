#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array of elements of a particular
 * size, and then set all elements to 0
 *
 * @nmemb: the array elements
 * @size: the size of the elements
 *
 * Return: a pointer for the array
 */

 void *_calloc(unsigned int nmemb, unsigned int size)
 {
 	unsigned int i;
	int *new_arr;

	if (!nmemb || !size)
		return (0);

	new_arr = malloc(nmemb * size);

	if (new_arr)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			new_arr[i] = 0;
		}
		return (new_arr);
	}
	return (0);
}
