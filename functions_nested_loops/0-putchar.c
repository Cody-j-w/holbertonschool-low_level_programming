#include "main.h"

/**
 * main - entrypoint of program
 * Description: uses _putchar function to print a string.
 * Return: 0.
 *
 */

int main(void)
{
	char c[8] = "_putchar";

	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
