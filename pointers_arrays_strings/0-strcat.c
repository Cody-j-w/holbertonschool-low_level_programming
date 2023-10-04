#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - concatenate two strings together.
 * @dest: the string that will have another string appended to its end
 * @src: the string being appended to the end of dest
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
