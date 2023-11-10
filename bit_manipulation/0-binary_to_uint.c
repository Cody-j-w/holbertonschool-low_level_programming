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
	int i = strlen(b);
	unsigned int base = 1;

	if (!b)
	{
		printf("Hit null string check");
		return (0);
	}
	printf("Going into loop: current binary string is %s: %d characters long", b, i);

	while (i >= 0)
	{
		printf("iteration number: %d\ncurrent bit is %c with an ascii value of %d\n", i, b[i], b[i]-'0');
		if (b[i] != 1 && b[i] != 0)
			return (0);
		dec += (b[i] - '0') * base;
		base = base * 2;
		i--;
	}
	return (dec);
}