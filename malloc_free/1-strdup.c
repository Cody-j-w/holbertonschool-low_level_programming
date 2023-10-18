#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * _strdup - allocates memory, and then duplicated a given string in that
 * allocated area
 * @str: the string to be duplicated
 *
 * Return: a pointer to the string, or null if the function failed
 */

char *_strdup(char *str)
{
	int i = 0;
	char *new_str;

	if (!str)
	{
		return (0);
	}

	new_str = malloc(_strlen(str) + 1);

	if (new_str)
	{
		for (; i <= _strlen(str); i++)
		{
			new_str[i] = str[i];
		}
		return (new_str);
	}
	else
	{
		return (0);
	}
}
