#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string using recursion
 * @str: the string whose length will be calculated
 *
 * Return: the length of str
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		str++;
		return (_strlen_recursion(str) + 1);
	}
}
