#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - accept a variable number of parameters and sum them
 * @index: the number of parameters being passed
 *
 * Return: the summed total
*/

int sum_them_all(const unsigned int index, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, index);

	for (i = 0; i < index; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
