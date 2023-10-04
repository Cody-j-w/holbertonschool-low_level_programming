#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concatenate two strings together, to a limit set by n
 * @dest: the string that will have another string appended to its end
 * @src: the string being appended to the end of dest
 * @n: the maximum number of bytes that can be appended to dest from src
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);

	for (; i <= src_len && i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
