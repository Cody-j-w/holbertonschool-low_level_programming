#include <stdio.h>

/**
 * main - entrypoint of program
 * Description: writes out digits 0 through 9, separated by a comma and space
 * Return: 0 (always success)
 */

int main(void)
{
	int alpha;

	for (alpha = 0 ; alpha <= 9 ; alpha++)
	{
		if (alpha > 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('0' + alpha);
	}
	putchar('\n');

	return (0);
}
