#include "main.h"

/**
 * factorial - calculate the factorial of a provided integer
 * @n: the integer to be factorialized
 *
 * Return: the factorial value, or -1 if initial value is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
