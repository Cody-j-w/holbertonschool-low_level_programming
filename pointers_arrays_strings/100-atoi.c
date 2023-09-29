#include "main.h"
#include <stdio.h>

/**
 * _atoi - recreation of the atoi() standard function
 * @str: the string to be converted to an integer
 *
 * Return: the integer produced from converting str
 */

int _atoi(char *str)
{
	int i = 0;
	int neg = 0;
	int sign = 1;
	int result = 0;
	int one = 0;
	int lastone = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '-')
			neg += 1;
		if ((str[i] < '0' || str[i] > '9') && (result > 0))
			break;
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (one == 1)
				lastone = 1;
			else
				lastone = 0;
			if (str[i] > '1')
				one = 1;
			if (str[i] == '1' || str[i] == '0')
				one = 0;
			if (result != 0)
				result = ((result + lastone) * 10) +
					(str[i] - '0') - one;
			else
				result = str[i] - '0' - one;
		}
		i++;
	}
	if (neg % 2 == 1)
		sign = -1;
	result = result * sign;
		return (result + (one * sign));
}

