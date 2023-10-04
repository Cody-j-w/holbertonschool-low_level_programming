#include "main.h"

/**
 * leet - converts a string into leetspeak
 * @str: the string destined to become 1337
 *
 * Return: th3 n3w1y 13373d 2tr1ng
 */

char *leet(char *str)
{
	char en[] = {'a', 'e', 'o', 't', 'l'};
	char EN[] = {'A', 'E', 'O', 'T', 'L'};
	char le[] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == en[j] || str[i] == EN[j])
				str[i] = le[j];
		}
		i++;
	}
	return (str);
}
