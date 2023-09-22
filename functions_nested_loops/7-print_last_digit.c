#include "main.h"

/**
 * print_last_digit - print the last digit of a given integer
 * @n: An integer that the function finds the last digit of.
 *
 * Description: find the last digit of a provided integer, n.
 * Return: the last digit of n.
 */

int print_last_digit(int n)
{
	if (n == -2147483648)
	{
		_putchar('8');
		return (8);
	}
	else
	{
	int absolute_value = n * ((n > 0) - (n <= 0));

	int last_digit = (absolute_value % 10);

	_putchar('0' + last_digit);

	return (last_digit);
	}
}
