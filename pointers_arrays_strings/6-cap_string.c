#include "main.h"

/**
 * cap_string - capitalizes all words in a given string.
 *
 * @str: the string given to be capitalized
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;
	int prev = 0;
	int j;
	char delimit[] = {',', ';', '.', ' ', '!', '?', '"', '(', ')',
		'{', '}', '\t', '\n'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if ((str[prev] == delimit[j] || i == 0) &&
					(str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= ' ';
		}
		if (i > 0)
			prev++;
		i++;
	}
	return (str);
}
