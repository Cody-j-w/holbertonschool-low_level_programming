#include "main.h"
/**
 * _isalpha - determines whether a character is a letter or not.
 * @c: a single character.
 *
 * Description: Uses an if statement to compare parameter c against ASCII
 * values and determine whether or not it is a letter.
 * Return: a boolean - true if c is a letter, false if not.
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
