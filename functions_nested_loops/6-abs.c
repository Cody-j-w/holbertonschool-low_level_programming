#include "main.h"

/**
 * _abs - find the absolute value of a given integer
 * @n: an integer that could be positive or negative
 *
 * Description: run comparisons on an integer, n, to find the absolute value
 * of that integer.
 * Return: the absolute value of n.
 */

int _abs(int n)
{
	return (n *((n > 0) - (n < 0)));
}
