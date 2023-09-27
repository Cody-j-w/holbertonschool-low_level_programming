#include "main.h"

/**
 * print_diagonal - prints a diagonal line with a length of n
 *
 * @n: the number of segments in the diagonal line
 */

void print_diagonal(int n)
{
	int i;

	int j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
