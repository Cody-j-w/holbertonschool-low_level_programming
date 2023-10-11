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
		return (_sqrt_helper(n, 2));
	}
}

/**
 * _sqrt_helper - provides the calculations for _sqrt_recursion
 * @x: a representation of n from the parent function
 * @y: an integer that will eventually either be returned as the root, or
 * determine that there is no root to be found
 *
 * Return: y if the root is found, -1 if not
 */

int _sqrt_helper(int x, int y)
{
	if (y >= x / 2)
		return (-1);
	else if (y * y == x)
		return (y);
	else
		return (_sqrt_helper(x, y + 1));
}
