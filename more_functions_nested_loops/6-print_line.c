#include "main.h"

/**
 * print_line - prints a line of variable length
 *
 * @n: an integer, representing the number of segments the line must have
 */

void print_line(int n)
{
	int i;
	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
