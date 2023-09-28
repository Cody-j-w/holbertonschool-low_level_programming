#include "main.h"

/**
 * puts_half - takes a string and prints the latter half of it
 *
 * @str: the string that is provided to puts_half to be chopped
 */

void puts_half(char *str)
{
	int i = 0;

	int half_len = (_strlen(str) - 1) / 2;

	while (str[i] != '\0')
	{
		if (i > half_len)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

/**
 * _strlen - gets the length of a string
 * @str: the string that needs to be measured
 *
 * Return: the length of str
 */

int _strlen(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
