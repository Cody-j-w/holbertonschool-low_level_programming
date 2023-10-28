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
	va_list ap;
	int i = 0;

	while (format[i] != '\0')
	{
		printf("iteration: %d\n", i);
		switch(format[i])
		{
			case 'c' :
				printf("%c", va_arg(ap, int));
				continue;
			default :
				continue;
		}
		i++;
	}
}