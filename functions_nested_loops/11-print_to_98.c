#include "main.h"

/**
 * print_to_98 - takes an integer and prints all integers between it and 98
 * @n: the starting integer
 *
 * Description: uses loops and if statements to print from n to 98.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		int abs = n * ((n > 0) - (n <= 0));
		if (n < 0)
			_putchar('-');

		if (abs > 99)
		{
			_putchar(abs / 100 + '0');
			_putchar((abs / 10) % 10 + '0');
		}
		else if (abs > 9)
		{
			_putchar(abs / 10 + '0');
		}
		_putchar(abs % 10 + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar(9 + '0');
	_putchar(8 + '0');
	_putchar('\n');
}
