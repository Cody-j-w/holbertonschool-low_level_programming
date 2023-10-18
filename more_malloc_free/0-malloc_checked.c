#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory and return a pointer
 * @n: the number of bytes to be allocated
 *
 * Return: a pointer to the allocated memory, or an error code of 98
 * on failure
 */

void *malloc_checked(unsigned int n)
{
	void *ptr = malloc(n);

	if (ptr)
		return (ptr);
	exit(98);
}
