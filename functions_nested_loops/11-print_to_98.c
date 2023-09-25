#include "main.h"

/**
 * print_to_98 - takes an integer and prints all integers between it and 98
 * @n: the starting integer
 *
 * Description: uses loops and if statements to print from n to 98.
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar(9 + '0');
		_putchar(8 + '0');
	}
	else
	{
		while (n != 98)
		{
			if (n < 0)
				_putchar('-');

			if (n > 99 || n < -99)
			{
				_putchar(n / 100 + '0');
				_putchar((n / 10) % 10 + '0');
			}
			else if (n > 9 || n < -9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
			if (n > 98)
				n--;
			else
				n++;
		}
		_putchar(9 + '0');
		_putchar(8 + '0');
	}
}
