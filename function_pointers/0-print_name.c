#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - uses a function passed as a param to print a string
 * @name: the string to be printed
 * @func: the function used to print @name
*/

void print_name(char *name, void (*func)(char *))
{
	if (func)
		func(name);
}