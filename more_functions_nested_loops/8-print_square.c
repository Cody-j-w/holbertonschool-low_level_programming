#include "main.h"

/**
 * print_square - prints a square with variable dimensions, as determined by n
 *
 * @n: the length of the sides of the square printed.
 */

void print_square(int n)
{
	int i;

	int j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
