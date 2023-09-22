#include "main.h"

/**
 * _islower - function that determines whether a character is upper case or
 * lower case.
 * @c: a supplied ASCII character.
 *
 * Description: uses an if statement to compare the ASCII values of provided
 * characters and determine if they fall within the range of upper case
 * or lower case characters.
 * Return: a boolean - 1 if the supplied character is lower case, 0 if upper.
 */

int _islower(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else if (c >= 'a' && c <= 'z')
		return (1);
}
