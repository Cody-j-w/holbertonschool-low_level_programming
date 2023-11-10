#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary string to decimal
 * @b: the string that represents a binary number
 *
 * Return: the decimal number, or 0 if the conversion fails
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;
	unsigned int base = 1;

	if (b == NULL)
	{
		return (0);
	}
	i = strlen(b) - 1;

	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		dec += (b[i] - '0') * base;
		base = base * 2;
		i--;
	}
	return (dec);
}
