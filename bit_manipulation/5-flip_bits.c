#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - determines the number of bits that need to be flipped to get
 * from x to y
 * @x: the first integer
 * @y: the second integer
 *
 * Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	unsigned long int flipped_bits = x ^ y;
	unsigned int count = 0;

	while (flipped_bits > 0)
	{
		if (flipped_bits & 1)
			count++;
		flipped_bits >>= 1;
	}
	return (count);
}
