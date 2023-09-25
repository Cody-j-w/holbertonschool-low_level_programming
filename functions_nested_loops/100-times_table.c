#include "main.h"

/**
 * print_times_table - prints a times table based on a provided integer between
 * 0 and 15.
 *
 * @n: the provided integer on which the printed times table will be based.
 *
 * Description: uses a combination of conditionals, loops, and mathematic
 * operators to print potentially 3-digit numbers using only a putchar
 * function.
 */

void print_times_table(int n)
{
	int i;

	int j;

	int sum;
	
	if (n > 15 || n < 0)
	{
		break;
	}
	else
	{
	
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				sum = i * j;

				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (sum < 100)
						_putchar(' ');
					if (sum < 10)
						_putchar(' ');
				}

				if (sum > 99)
				{
					_putchar(sum / 100 + '0');
					_putchar((sum / 10) % 10 + '0');
					_putchar(sum % 10 + '0');
				}
				else if (sum > 9)
				{
					_putchar(sum / 10 + '0');
					_putchar(sum % 10 + '0');
				}
				else
				{
					_putchar(sum + '0');
				}
			}
			_putchar('\n');
		}
	}
}


