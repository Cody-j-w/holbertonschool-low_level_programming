#include "main.h"

/**
 * _strlen - determines the length of a string.
 * @s: a pointer to the string whose length will be determined
 *
 * Return: the length of the provided string as an integer
 */

int _strlen(char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
