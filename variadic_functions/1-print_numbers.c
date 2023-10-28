#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints a series of integers supplied in va_list
 * with a supplied separator between each entry
 *
 * @separator: the supplied separator string
 * @count: the number of integers in va_list
*/

void print_numbers(const char *separator, const unsigned int count, ...)
{
    int i;
    va_list ap;

    va_start(ap);
    for (i = 0; i < count; i++)
    {
        if (i > 0)
            printf("%s", separator)
        printf("%d", va_arg(ap, int));
    }
    va_end(ap)
    printf("\n");
}