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
	int j = 0;
	char delimit[] = {',', ';', '.', ' ', '!', '?', '"', '(', ')',
		'{', '}', '\t', '\n'};

	while (str[i] != '\0')
	{
		for (; j < 13; j++)
		{
			if ((str[i - 1] == delimit[j] || i == 0) &&
					(str[i] >= 'a' || str[i] <= 'z'))
				str[i] -= ' ';
		}
		i++;
	}
	return (str);
}
