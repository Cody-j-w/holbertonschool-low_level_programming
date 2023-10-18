#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * string_nconcat - concatenate two strings together in an allocated
 * memory space, with an additional limiter on the second string
 * @str1: the leading string
 * @str2: the tailing string
 * @n: the limiter for the tailing string
 *
 * Return: a pointer to the new string
 */

char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	int i;
	int j;
	int limiter;
	char *new_str;

	if (!str1)
		str1 = "";
	if (!str2)
		str2 = "";
	if (n > _strlen(str2))
		limiter = _strlen(str2);
	else
		limiter = n;

	new_str = malloc(_strlen(str1) + _strlen(str2) + 1);

	if (new_str)
	{

		for (i = 0; i < _strlen(str1); i++)
		{
			new_str[i] = str1[i];
		}
		for (j = 0; j < limiter; j++)
		{
			new_str[i] = str2[j];
			i++;
		}
		new_str[i] = '\0';

		return (new_str);
	}
	else
	{
		return (0);
	}
}
