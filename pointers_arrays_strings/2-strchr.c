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
	char *chaptr = NULL;

	while (str[i] != '\0')
	{
		if (str[i] == cha)
		{
			chaptr = &str[i];
			return (chaptr);
		}
		i++;
	}
	return (0);
}
