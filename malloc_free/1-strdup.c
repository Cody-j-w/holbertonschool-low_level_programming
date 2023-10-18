#include "main.h"

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

	while (str[i] != '\0')
	{
		i++;
	}

	if (i == 0)
	{
		return (0);
	}

	new_str = malloc(i);

	if (new_str)
	{
		new_str = str;
		return (new_str);
	}
	else
	{
		return (0);
	}
}
