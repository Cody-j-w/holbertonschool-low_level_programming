#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints a series of integers supplied in va_list
 * with a supplied separator between each entry
 *
 * @separator: the supplied separator string
 * @count: the number of strings in va_list
*/

void print_strings(const char *separator, const unsigned int count, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, count);
	for (i = 0; i < count; i++)
	{
		str = va_arg(ap, char *);
		if (i > 0 && separator)
			printf("%s", separator);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
	}
	va_end(ap);
	printf("\n");
}
