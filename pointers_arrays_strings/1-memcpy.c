#include "main.h"

/**
 * _memcpy - copies bytes from one area in memory to another
 *
 * @dest: a pointer to the memory area being copied to
 * @src: a pointer to the memory area being copied from
 * @n: the number of memory spaces being copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
