#include <stdio.h>

/**
 * main - entrypoint of program
 * Description: writes out the alphabet twice using putchar() - once lower case
 *  and once upper case.
 * Return: 0 (always success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A' ; alpha <= 'Z' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
