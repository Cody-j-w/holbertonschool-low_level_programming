#include "main.h"

/**
 * _puts_recursion - uses recursion to emulate the puts function
 * @str: the string to be printed
 */

void _puts_recursion(char *str)
{

	if (*str == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*str);
		str++;
		_puts_recursion(str);
	}
}
