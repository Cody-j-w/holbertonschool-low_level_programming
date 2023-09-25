#include <stdio.h>

/**
 * main - entrypoint of program
 *
 * Description: prints the first 50 numbers of the Fibonacci sequence
 *
 * Return: always 0
 */

int main(void)
{
	long fib = 2;

	long fib_prev = 1;

	long holder;
	
	int count = 1;

	while (count < 50)
	{
		if (fib == 2 && fib_prev == 1)
		{
			printf("%lu, ", fib_prev);
			printf("%lu, ", fib);
		}
		else if (count == 49)
		{
			printf("%lu", fib);
		}
		else
		{
			printf("%lu, ", fib);
		}
		holder = fib;
		fib += fib_prev;
		fib_prev = holder;
		count++;
	}
	return (0);
}
