#include "main.h"

/**
 * _strcpy - copy the value of a string to a new location
 * @src: a pointer pointing to the string to be copied
 * @dest: a pointer pointing to the location where the src string is to be
 * copied
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
