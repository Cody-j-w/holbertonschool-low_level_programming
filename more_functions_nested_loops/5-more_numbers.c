#include "main.h"

/**
 * print_more_numbers - print all numbers from 0 to 14, 10 times
 */

void print_more_numbers(void)
{
	int i;

	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
