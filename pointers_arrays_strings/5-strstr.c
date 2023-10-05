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
	int holder = 0;
	char *res;

	while (str[i] != '\0')
	{
		if (str[i] == sub[0])
		{
			holder = i;
			while (sub[j] != '\0')
			{
				if (str[i] == sub[j])
				{
					i++;
					j++;
				}
				else
				{
					break;
				}
			}
			if (sub[j] == '\0')
			{
				res = &str[holder];
				return (res);
			}
		}
		j = 0;
		if (holder != 0)
			i = holder + 1;
		else
			i++;
	}
	return (0);
}

