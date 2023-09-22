#include "main.h"

/**
 * print_sign - prints a sign to signify whether a given integer is positive,
 *  negative, or zero.
 * @n - an integer, could be positive, negative, or zero.
 *
 * Description: compares n, finds its value, and prints + for a positive value
 * - for a negative value, or 0 for a value of zero.
 * Return: 1 if n is positive, -1 if n is negative, and 0 if n is zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
