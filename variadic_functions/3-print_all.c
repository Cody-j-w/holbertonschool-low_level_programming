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

	va_start(ap, format);

	while (format[i] != '\0')
	{
		switch(format[i])
		{
				case 'c':
						printf("%c\n", va_arg(ap, int));
						break;
				case 'i':
						printf("%d\n", va_arg(ap, int));
						break;
				case 'f':
						printf("%f\n", va_arg(ap, double));
						break;
				case 's':
						printf("%s\n", va_arg(ap, char *));
						break;
				default:
						break;
		}
		++i;
	}

	va_end(ap);
	printf('\n');
}