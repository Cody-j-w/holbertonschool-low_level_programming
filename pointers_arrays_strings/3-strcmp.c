#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: the first of the two strings to be compared
 * @s2: the second of the two strings to be compared
 *
 * Return: 0 if the ASCII values of s1 and s2 are equal, a negative
 * number if the first non-equal character in s1 has a lesser ASCII value
 * than s2, and a positive number if the first non-equal character in s1
 * has a greater ASCII value than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
