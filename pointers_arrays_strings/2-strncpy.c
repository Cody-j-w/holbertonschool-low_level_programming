#include "main.h"

/**
 * _strncpy - copy the value of a string to a new location
 * @src: a pointer pointing to the string to be copied
 * @dest: a pointer pointing to the location where src is to be
 * copied
 * @n: the maximum number of bytes that may be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
