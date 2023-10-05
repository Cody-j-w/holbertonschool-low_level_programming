#include "main.h"

/**
 * _strstr - find a substring within a larger string
 *
 * @str: the main string
 * @sub: the substring to be found within str
 *
 * Return: a pointer to the beginning of sub if it exists, NULL if not
 */

char *_strstr(char *str, char *sub)
{
	int i = 0;
	int j = 0;
	int holder;
	char *res;

	while (str[i] != '\0')
	{
		if (str[i] == sub[0])
		{
			holder = i;
			while (sub[j] == str[i])
			{
				i++;
				j++;
				if (sub[j] == '\0')
				{
					res = &str[holder];
					return (res);
				}
			}
		}
		i = holder;
		j = 0;
	}
	return (0);
}

