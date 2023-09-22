#include "main.h"

/**
 * times_table - print the 9 times table, starting from 0
 *
 * Description: use a nested loop, division, and a modulus to print 
 * a table of 2 digit integers using _putchar
 */

void times_table(void)
{
	int i;

	int j;

	int sum;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			sum = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			
			if (sum > 9)
			{
				_putchar((sum/10)+'0');
				_putchar((sum%10)+'0');
			}
			else
			{
				_putchar(sum + '0');
			}
			
		}
	}
}	

