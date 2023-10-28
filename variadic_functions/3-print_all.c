#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints all parameters passed to it, based on the format string
 * @format: the format string that details which optional parameter gets
 * printed as what datatype
*/

void print_all(const char * const format, ...)
{

	int i = 0;

	while (format[i] != '\0')
	{
		printf("iteration: %d\n", i);
		
		i++;
	}
}