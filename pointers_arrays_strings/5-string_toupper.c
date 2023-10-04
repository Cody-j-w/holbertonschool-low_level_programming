#include "main.h"

/**
 * string_toupper - takes a string, and sets all alphabetical characters
 * to upper case.
 *
 * @str: the string that will be made upper case.
 *
 * Return: str.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ' ';
		i++;
	}
	return (str);
}
