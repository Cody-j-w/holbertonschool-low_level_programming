#include "main.h"

/**
 * _pow_recursion - calculate the result of x integer to the yth power
 * @x: the base integer
 * @y: the power integer
 *
 * Return: the result of the calculation, or -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

