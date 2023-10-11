#include "main.h"

/**
 * _print_rev_recursion - take a string, and print it in reverse using recursion
 * @str: the string to be printed in reverse
 */

void _print_rev_recursion(char *str)
{
	char *strptr = str;

	if (*str != '\0')
	{
		strptr++;
		_print_rev_recursion(strptr);
		_putchar(*str);
	}
}
