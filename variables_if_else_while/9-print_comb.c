#include <stdio.h>

/**
 * main - entrypoint of program
 * Description: writes out the single-digit base 10 numbers
 * Return: 0 (always success)
 */

int main(void)
{
	int alpha;
	int beta;

	for (alpha = 0 ; alpha <= 9 ; alpha++)
	{
		for (beta = 0 ; beta <= 9 ; beta++)
		{
			if (alpha > 0 || beta > 0)
			{
				putchar(',');
				putchar(' ');
			}
			if (alpha > 0)
				putchar('0' + alpha);
			putchar('0' + beta);
		}
	}

	return (0);
}
