#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: print the sum of all multiples of 3 and 5 between 0 and 1024
 *
 * Return: always 0.
 */

int main(void)
{
	int sum;

	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
