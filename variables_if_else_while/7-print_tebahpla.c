#include <stdio.h>

/**
 * main - entrypoint of program
 * Description: writes out the alphabet backwards using putchar()
 * Return: 0 (always success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
