#include <stdio.h>

/**
 * main - entrypoint of program
 * Description: writes out the single-digit base 10 numbers
 * Return: 0 (always success)
 */

int main(void)
{
	char alpha;

	for (alpha = 0 ; alpha <= 9 ; alpha++)
	{
		putchar('0' + alpha);
	}
	putchar('\n');

	return (0);
}
