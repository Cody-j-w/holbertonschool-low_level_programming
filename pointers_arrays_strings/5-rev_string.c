#include "main.h"

/**
 * rev_string - print a string in reverse
 *
 * @str: a string to be reversed and printed
 */

void rev_string(char *str)
{
	char *start = str;

	char *end = str;

	char temp;

	int i;

	int length = _strlen(str);


	for (i = 0 ; i < length - 1 ; i++)
	{
		end++;
	}

	for (i = 0 ; i < length / 2 ; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}

/**
 * _strlen - determines the length of a string.
 * @s: a pointer to the string whose length will be determined
 *
 * Return: the length of the provided string as an integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

