#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets the value of the bit that aligns with the specified index
 * @n: the number being checked
 * @index: the specified index
 *
 * Return: the value of the bit, or -1 if an error occurs
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned int bit;
	unsigned int sigbit = sizeof(int) * 16 - 1;

	while (((n >> sigbit) & 1) == 0)
	{
		bit = (n >> sigbit) & 1;
		sigbit--;
	}

	for (i = 0; i <= sigbit; i++)
	{

		bit = (n >> i) & 1;

		if (i == index)
		{
			printf("i: %d\nindex: %d\n", i, index);
			return (bit);
		}
	}
	return (-1);
}
