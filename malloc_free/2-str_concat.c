#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * str_concat - concatenate two strings together in an allocated memory
 * space
 * @str1: the leading string
 * @str2: the tailing string
 *
 * Return: a pointer to the new string
 */

char *str_concat(char *str1, char *str2)
{
	int i;
	int j;
	char *new_str;

	if (!str1)
		str1 = "";
	if (!str2)
		str2 = "";

	new_str = malloc(_strlen(str1) + _strlen(str2) + 1);

	if (new_str)
	{

		for (i = 0; i < _strlen(str1); i++)
		{
			new_str[i] = str1[i];
		}
		for (j = 0; j < _strlen(str2); j++)
		{
			new_str[i] = str2[j];
			i++;
		}

		return (new_str);
	}
	else
	{
		return (0);
	}
}
