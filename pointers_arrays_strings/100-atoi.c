#include "main.h"

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

	int pos = 0;

	int sign = 1;

	int result = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			neg += 1;
		}
		if (str[i] == '+')
		{
			pos += 1;
		}

		if ((str[i] <= '0' || str[i] >= '9') && (result > 0))
			break;
		
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
		}
	}
		i++;
	}
	if (neg > pos)
		sign = -1;
	else
		sign = 1;
	return (result * sign);
}

