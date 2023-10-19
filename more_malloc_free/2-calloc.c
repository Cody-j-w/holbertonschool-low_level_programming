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
	unsigned int *new_arr;
	unsigned int val;

	if (nmemb >= 1 && size >= 1)
		val = nmemb * size;
	else
		return (0);

	new_arr = malloc(val);

	if (new_arr)
		return (new_arr);
	return (0);
}
