#include "main.h"

/**
 * _strchr - finds the first instance of a specific character in a 
 * provided string.
 *
 * @str: the provided string
 * @cha: the character to be found
 *
 * Return: a pointer to the first instance of cha if it exists, NULL if
 * not
 */

char *_strchr(char *str, char cha)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] == cha)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
