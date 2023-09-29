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

	int sign = 1;

	int result = 0;

	while (str[i] != '\0')
	{
		if ((str[i] == '-' && sign > 0) || (str[i] == '+' && sign < 0))
			sign = sign * -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
		}
		i++;
	}
	return (result * sign);
}

