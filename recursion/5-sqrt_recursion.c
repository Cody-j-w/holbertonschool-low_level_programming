#include "main.h"

/**
 * _sqrt_recursion - calculate the square root of an integer using recursion
 *
 * @n: the integer whose square root needs to be found
 *
 * Return: the square root of n, or -1 if n does not have a whole square root
 */

int _sqrt_recursion(int n)
{
	int num = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		num = _sqrt_recursion(n - 1);
		return ((num + n / num) / 2);
	}
}
