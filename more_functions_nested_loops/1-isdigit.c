#include "main.h"

/**
 * _isdigit - determines whether a given character is a digit or not
 *
 * @c: a single character.
 *
 * Return: 1 if c is a digit, 0 if c is anything else.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
