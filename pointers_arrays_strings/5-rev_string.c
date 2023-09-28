#include "main.h"

/**
 * rev_string - print a string in reverse
 *
 * @str: a string to be reversed and printed
 */

void rev_string(char *str)
{
	int j;

	int i = 0;

	int end;

	while (str[i] != '\0')
	{
		i++;
	}

	end = i - 1;

	for (j = end ; j >= 0 ; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
