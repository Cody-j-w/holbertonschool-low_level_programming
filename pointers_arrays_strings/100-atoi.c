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
	int sign = 1;
	int result = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			neg += 1;
		}

		if ((str[i] < '0' || str[i] > '9') && (result > 0))
		{
			break;
		}

		if (str[i] >= '0' && str[i] <= '9')
		{
			if (result != 0)
				result = ((result + 1) * 10) + (str[i] - '1');
			else
				result = str[i] - '1';
		}
		i++;
	}

	if (neg % 2 == 1)
	{
		sign = -1;
	}
	result = result * sign;
	if (result > 0)
		return (result + 1);
	else
		return (result - 1);
}

