#include <stdio.h>

/**
 * main - entrypoint of program
 * Description: writes out the alphabet using putchar()
 * Return: 0 (always success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
