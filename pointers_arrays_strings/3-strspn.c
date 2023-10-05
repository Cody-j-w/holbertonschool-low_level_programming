#include "main.h"

/**
 * _strspn - find the length of a prefix string using only specific bytes
 *
 * @str: the main string that _strspn will find the prefix string in
 * @accept: the acceptable bytes for the prefix string
 *
 * Return: the length of the prefix string as an unsigned int
 */

unsigned int _strspn(char *str, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int res = 0;
	int end = 0;

	while (str[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (str[i] == accept[j])
			{
				res++;
				i++;
				end = 1;
				break;
			}
			else
				end = 0;
		}
		if (end == 0)
			return (res);
		j = 0;
	}
	return (res);
}
