#include "main.h"

/**
 * _strpbrk - locate the first occurance of a particular set of bytes in
 * a string
 *
 * @str: the string being searched
 * @accept: the acceptable bytes
 *
 * Return: a pointer to the first occurance of a byte from accept
 */

char *_strpbrk(char *str, char *accept)
{
	char *res;
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (str[i] == accept[j])
			{
				res = &str[i];
				return (res);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
