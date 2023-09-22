#include "main.h"

/**
 * jack_bauer - prints every minute of the day, from 00:00 to 23:59
 *
 * Description: uses nested for loops to iterate over minutes and hours and
 * print them to standard output
 */

void jack_bauer(void)
{
	int h_t;

	int h_o;

	int m_t;

	int m_o;

	for (h_t = 0 ; h_t <= 2 ; h_t++)
	{
		for (h_o = 0 ; h_o <= 9	; h_o++)
		{
			if (h_t == 2 && h_o == 4)
			{
				break;
			}
			else
			{
			for (m_t = 0 ; m_t < 6 ; m_t++)
			{
				for (m_o = 0 ; m_o <= 9 ; m_o++)
				{
					_putchar(h_t + '0');
					_putchar(h_o + '0');
					_putchar(':');
					_putchar(m_t + '0');
					_putchar(m_o + '0');
					_putchar('\n');
				}
			}
			}
		}
	}
}
