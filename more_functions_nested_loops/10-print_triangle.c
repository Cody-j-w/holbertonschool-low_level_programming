#include "main.h"

/**
 * print_triangle - prints a triangle of variable size
 *
 * @n: the integer that determines the dimensions of the triangle
 */

void print_triangle(int n)
{
	int i;

	int j;

	int k;

	if (n <= 0)
		_putchar('\n');

	for (i = n ; i > 0 ; i--)
	{
		for (j = 1 ; j < i ; j++)
		{
			_putchar(' ');
		}
		for (k = i ; k <= n ; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
