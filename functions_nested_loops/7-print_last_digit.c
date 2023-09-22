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
	int absolute_digit = n * ((n > 0) - (n < 0));

	int last_digit = (absolute_digit % 10);

	_putchar(last_digit);
	return (last_digit);
}
