#include "main.h"

/**
 * print_to_98 - takes an integer and prints all integers between it and 98
 * @n: the starting integer
 *
 * Description: uses multiple loops, if statements, and a bit of recursion to
 * print to properly print to 98
 */

void print_large(int n);

void print_to_98(int n)
{
	if (n > 98)
	{
		for ( ; n >= 98 ; n--)
		{
			if (n == 98)
			{
				print_large(n);
			}
			else
			{
				print_large(n);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n < 98)
	{
		for ( ; n <= 98 ; n++)
		{
			if (n == 98)
			{
				print_large(n);
			}
			else
			{
				print_large(n);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		print_large(n);
	}
}

/**
 * print_large - helper function that recursively prints particularly large
 * numbers.
 * @n: integer given to print_large by print_to_98 loop.
 *
 * Description: probably absolute overkill.
 */

void print_large(int n)
{
	int N = n;

	if (N < 0)
	{
		_putchar('-');
		N = N * -1;
	}

	if (N == 0)
		_putchar('0');

	if (N / 10)
		print_large(N);

	_putchar(N % 10 + '0');
}






