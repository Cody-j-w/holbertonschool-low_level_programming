#include "main.h"

/**
 * _puts - recreation of the standard puts function
 *
 * @str: a string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
