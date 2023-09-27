#include "main.h"

/**
 * _isupper - determines if a given character is upper case
 *
 * @c: a single character, to be determined as upper case or not by function
 *
 * Return: 1 if c is an upper case letter, 0 if not.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
