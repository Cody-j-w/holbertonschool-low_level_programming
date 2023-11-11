#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include "2-get_bit.c"

/**
 * clear_bit - set a specified bit of an integer to 0
 * @n: a pointer to the integer being changed
 * @index: the specific bit of @n that is being flipped
 *
 * Return: 1 if the change is successful, -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = ~(1 << index);
	unsigned int sigbit = sizeof(unsigned long int) * 8 - 1;

	if (index > sigbit)
		return (-1);

	*n = *n & mask;

	if (get_bit(*n, index) == 0)
		return (1);
	return (-1);
}
