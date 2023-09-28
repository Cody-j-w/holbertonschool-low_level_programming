#include "main.h"

/**
 * rev_string - print a string in reverse
 *
 * @str: a string to be reversed and printed
 */

void rev_string(char *str)
{
	int j;

	int i = 0;

	int end;

	char holder = *str;

	while (str[i] != '\0')
	{
		i++;
	}
	end = i;

	i = 0;

	for (j = end ; j >= 0 ; j--)
	{
		holder[i] = str[end];	
	}
	*str = holder;
}
