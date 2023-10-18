#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with a
 * given character
 * @size: the size of the array
 * @c: the specified character
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_arr = malloc(size);

	if (size == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		new_arr[i] = c;
	}

	return (new_arr);
}

