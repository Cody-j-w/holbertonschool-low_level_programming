#include "main.h"

/**
 * print_alphabet_X10 - prints alphabet 10 times
 *
 * Description: uses nested for loops to iterate over the alphabet ten times
 */

void print_alphabet_x10(void)
	{
		int i;
		int j;

		for (i = 0 ; i < 10 ; i++)
		{
			for (j = 'a' ; j <= 'z' ; j++)
			{
				_putchar(j);
			}
			_putchar('\n');
		}
	}
